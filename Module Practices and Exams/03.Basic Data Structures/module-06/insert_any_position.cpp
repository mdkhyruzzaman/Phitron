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

void insert_at_any_position(Node* &head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i=1; i<pos; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void print_linked_list(Node * head)
{
    cout<<endl<<"Your Linked list: ";
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
        cout<<"Option 1: Insert at tail."<<endl;
        cout<<"Option 2: Print linked list."<<endl;
        cout<<"Option 3: Insert at any position."<<endl;
        cout<<"Option 4: Terminate the program."<<endl;
        int op;
        cout<<endl<<"Choose your option: ";
        cin>>op;
        if (op == 1)
        {
            cout<<endl<<"Enter your value: ";
            int val;
            cin>>val;
            insert_at_tail(head, val);
            cout<<endl<<"Inserted at tail.";
        }
        else if(op == 2)
        {
            print_linked_list(head);
        }
        else if(op == 3)
        {
            int val, pos;
            cout<<endl<<"Enter your positon: ";
            cin>>pos;
            cout<<endl<<"Enter your value: ";
            cin>>val;
            insert_at_any_position(head, pos, val);
            cout<<endl<<"Inserted at postion "<<pos;
        }
        else if(op == 4)
        {
            cout<<endl<<"End the program."<<endl;
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
