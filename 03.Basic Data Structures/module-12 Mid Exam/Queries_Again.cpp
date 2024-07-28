//4th Problem
/*
Problem Statement

You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

You need to insert the value V at index X. Assume that index starts from 0.
After that for each query you need to print the linked list from left to right and right to left.
If the index is invalid, then print "Invalid".
Note: You must use Doubly Linked List, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 1000;
0 <= V <= 1000
Output Format

For each query print the linked list from left to right and right to left or print "Invalid" as asked.
Print "L -> " before printing the linked list from left to right.
Print "R -> " before printing the linked list from right to left.
*/

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

void insert_head(Node* &head, Node* &tail, int val)
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

void insert_tail(Node* &tail, int val)
{
    Node* newNode = new Node(val);

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_anyposition(Node* head, int pos, int val) 
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i = 1; i<=pos-1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;

    newNode->prev = temp;
    temp->next = newNode; 
}

int size(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void print_left(Node* head)
{
    cout<<"L -> ";
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void print_right(Node* tail)
{
    cout<<"R -> ";
    Node* temp = tail;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main()
{   
    Node* head = NULL;
    Node* tail = NULL;
    
    int n;
    cin>>n;
    while(n--)
    {
        int listSize = size(head);
        int pos, val;
        cin>>pos>>val;
        if(listSize<pos)
        {
            cout<<"Invalid"<<endl;
        }
        else if(pos == 0)
        {
            insert_head(head, tail, val);
            print_left(head);
            print_right(tail);
        }
        else if(listSize == pos)
        {
            insert_tail(tail, val);
            print_left(head);
            print_right(tail);
        }
        else 
        {
            insert_anyposition(head, pos, val);
            print_left(head);
            print_right(tail);
        }
    }

    return 0;
}