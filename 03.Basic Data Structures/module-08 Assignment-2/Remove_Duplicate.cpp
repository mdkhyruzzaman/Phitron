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
void insert_node(Node* &head, Node* &tail, int val)
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
void remove_duplicate(Node* head)
{
    Node* temp = head;
    while(temp->next != NULL)
    {
        Node* temp2 = temp;
        while(temp2->next != NULL)
        {
            if(temp->val == temp2->next->val)
            {
                Node* deleteNode = temp2->next;
                temp2->next = temp2->next->next;
                delete deleteNode;
            }
            else
            {
                temp2 = temp2->next;
            }
        }
        temp = temp->next;
        if(temp == NULL) break;
    }
}
void print_list(Node* head)
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
    Node* tail = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }

        insert_node(head, tail, val);
    }
    remove_duplicate(head);
    print_list(head);
    return 0;
}