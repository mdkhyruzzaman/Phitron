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
int list_size(Node* head)
{
    Node* temp = head;
    int size = 0;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}
void insert_head(Node* &head,  int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node* &tail, int val)
{
    Node* newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
}
void delete_node(Node* &head, Node* &tail, int pos)
{

    Node* temp = head;
    if(pos == 0)
    {
        head = head->next;
        delete temp;
        return;
    }

    for(int i=1; i<pos; i++)
    {
        temp = temp->next;
    }

    if(temp->next->next == NULL){
        tail = temp;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
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
    int t;
    cin>>t;
    while(t--)
    {
        int op, val;
        cin>>op>>val;
        if(op != 2 && head == NULL)
        {
            Node* newNode = new Node(val);
            head = newNode;
            tail = newNode;
        }
        else if(op == 0)
        {
            insert_head(head, val);
        }
        else if(op == 1)
        {
            insert_tail(tail, val);
        }
        else if(op == 2)
        {
            if(list_size(head)>val)
            {
                delete_node(head, tail, val);
            }
        }

        print_list(head);
    }
    return 0;
}