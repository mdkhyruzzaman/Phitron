#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_linked_list(Node* &head, int val)
{
    Node* newNode = new Node(val);

    Node* temp = head;
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void sort_liked_list(Node* &head)
{
    Node* temp = head;
    while(temp->next != NULL)
    {
        Node* chTemp = temp->next;
        while(chTemp != NULL)
        {
            if(temp->val>chTemp->val){
                int tempVal = chTemp->val;
                chTemp->val = temp->val;
                temp->val = tempVal;
            }
            chTemp = chTemp->next;
        }
        temp = temp->next;
    }
}

bool chk_duplicate_node(Node* &head)
{
    Node* temp = head;
    while(temp->next != NULL)
    {
        if(temp->val == temp->next->val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{   
    Node* head = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_linked_list(head, val);
    }

    sort_liked_list(head);
    if(chk_duplicate_node(head)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}