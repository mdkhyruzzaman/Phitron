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
class myQueue 
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int listSize = 0;
        void push(int val)
        {
            listSize++;
            Node* newNode = new Node(val);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }

            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }

        void pop()
        {
            listSize--;
            Node* deleteHead = head;
            head = head->next;
            if(head == NULL) tail = NULL;
            else head->prev = NULL;

            delete deleteHead;
        }

        int front()
        {
            return head->val;
        }

        bool empty()
        {
            if(listSize == 0) return true;
            else return false;
        }
};
int main()
{   
    myQueue q;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}