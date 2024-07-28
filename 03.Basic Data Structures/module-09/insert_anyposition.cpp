#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void print_normal(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* temp = tail;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
void insert_anyposition(Node* head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;
}
int main()
{   
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b;

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;
    insert_anyposition(head, 2, 25);

    print_normal(head);
    print_reverse(tail);
    return 0;
}