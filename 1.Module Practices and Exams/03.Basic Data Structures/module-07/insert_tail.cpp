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
void insert_tail(Node* head, Node* tail, int val)
{
    Node* newNode = new Node(val);
}
int main()
{   
    Node* head = NULL;
    Node* tail = NULL;
    insert_tail(head, tail);  
    return 0;
}