// 2nd Problem
/*
Problem Statement

You need to take a doubly linked list of integer value as input. You need to tell if the doubly linked list forms a palindrome or not.

Note: You need to solve this using Doubly Linked List, otherwise you will not get marks.

Input Format

Input will contain the values of the doubly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" if it forms a palindrom otherwise output "NO".
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

bool isPalindrome(Node* head, Node* tail) 
{
    Node* left = head;
    Node* right = tail;

    while(left != right->prev && left != right)
    {
        if(left->val != right->val)
        {
            return false;
        }
        left = left->next;
        right = right->prev;
    }

    if(left->val != right->val)
    {
            return false;
    }

    return true;
}

int main()
{   
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int n;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
    }

    if(isPalindrome(head, tail)) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}