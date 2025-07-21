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
long long int findDifference(Node* head)
{
    Node* temp = head->next;
    long long int maxVal = head->val;
    long long int minVal = head->val;
    while(temp != NULL)
    {
        if(maxVal<temp->val)
        {
            maxVal = temp->val;
        }

        if(minVal>temp->val)
        {
            minVal = temp->val;
        }

        temp = temp->next;
    }

    return (maxVal - minVal);
}
int main()
{   
    Node* head = NULL;
    Node* tail = NULL;
    while (true)
    {
        long long int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }

        insert_node(head, tail, val);
    }
    cout<<findDifference(head);
    return 0;
}