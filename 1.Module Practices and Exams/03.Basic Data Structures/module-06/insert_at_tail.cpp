#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* & head, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void print_linked_list(Node * head)
{
    cout<<"Linked list: ";
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{   
    Node*head = NULL;
    while(true)
    {
        cout<<"Option 1: Insert new node."<<endl;
        cout<<"Option 2: Print linked list."<<endl;
        cout<<"Option 3: Terminate the program."<<endl;
        int op;
        cout<<"Choose your option: ";
        cin>>op;
        if (op == 1)
        {
            cout<<"Enter your value: ";
            int val;
            cin>>val;
            insert_at_tail(head, val);
        }
        else if(op == 2)
        {
            print_linked_list(head);
        }
        else if(op == 3)
        {
            cout<<"End the program."<<endl;
            break;
        }
        else
        {
            cout<<"Your option is not valid. Please choose correct option."<<endl;
        }
        cout<<endl;
    }
    return 0;
}
