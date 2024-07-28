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
void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void delete_at_positon(Node* head, int pos)
{
    Node* temp = head;
    for(int i = 1; i<=pos-1; i++)
    {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete deleteNode;
}

void delete_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL)
    {
        return;
    }

    head->prev = NULL;
}
int main()
{   
    // Node* head = NULL;
    // Node* tail = NULL;
    Node* head = new Node(10);
    Node* tail = head;
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* tail = b;

    // head->next = a;
    // a->prev = head;

    // a->next = b;
    // b->prev = a;

    // insert_anyposition(head, 2, 25);
    // insert_at_head(head, tail, 5);
    // insert_at_tail(head, tail, 100);

    // delete_at_positon(head, 3);
    delete_head(head);

    print_normal(head);
    // print_reverse(tail);
    return 0;
}