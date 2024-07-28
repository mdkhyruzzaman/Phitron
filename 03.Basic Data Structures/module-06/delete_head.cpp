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

void insert_at_head(Node* &head, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
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
    cout<<endl<<endl;
}

void delete_at_postion(Node* &head, int pos)
{
    Node* temp = head;

    for(int i=1; i<pos; i++)
    {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void delete_head(Node* &head)
{
    Node* deleteHead = head;
    head = head->next;
    delete deleteHead;
}

int main()
{   
    Node*head = NULL;
    while(true)
    {
        print_linked_list(head);

        cout<<"Option 1: Insert at tail."<<endl;
        cout<<"Option 2: Insert at any position."<<endl;
        cout<<"Option 3: Insert at head."<<endl;
        cout<<"Option 4: Delete at positon."<<endl;
        cout<<"Option 5: Delete head."<<endl;
        cout<<"Option 6: Terminate the program."<<endl;
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
            int val, pos;
            cout<<endl<<"Enter positon: ";
            cin>>pos;
            cout<<endl<<"Enter value: ";
            cin>>val;
            if(pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_any_position(head, pos, val);
            }
            cout<<endl<<"Inserted at postion "<<pos;
        }
        else if(op == 3)
        {
            int  val;
            cout<<endl<<"Enter value: ";
            cin>>val;
            insert_at_head(head, val);
            cout<<endl<<"Inserted at head."<<endl;
        }
        else if(op == 4)
        {
            int pos;
            cout<<endl<<"Enter position: ";
            cin>>pos;
            if(pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_at_postion(head, pos);
            }
            cout<<"Deleted "<<pos;
        }else if(op == 5)
        {
            delete_head(head);
            cout<<"Deleted head.";
        }
        else if(op == 6)
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
