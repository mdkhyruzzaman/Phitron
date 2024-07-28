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

void print_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

void reverseByRecusive(Node* &head, Node* cur)
{
    if(cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverseByRecusive(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

void reverse(Node* &head)
{
    reverseByRecusive(head, head);
}

int main()
{   
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b= new Node(30);

    head->next =a;
    a->next = b;
    
    print_list(head);
    cout<<endl;
    reverse(head);
    print_list(head);
    return 0;
}