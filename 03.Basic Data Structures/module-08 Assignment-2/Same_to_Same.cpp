#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
        long long int val;
        Node* next;
        Node(long long int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_node(Node* &head, Node* &tail, long long int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
}
bool match_node(Node* head1, Node* head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(true)
    {
        if(temp1 == NULL && temp2 == NULL) return true;

        if((temp1 == NULL && temp2 != NULL) || (temp2 == NULL && temp1 != NULL))
        {
            return false;
        }else if(temp1->val != temp2->val)
        {
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
}
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    while (true)
    {
        long long int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }

        insert_node(head1, tail1, val);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while (true)
    {
        long long int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }

        insert_node(head2, tail2, val);
    }

    if(match_node(head1, head2)) cout<<"YES";
    else cout<<"NO";

    return 0;
}