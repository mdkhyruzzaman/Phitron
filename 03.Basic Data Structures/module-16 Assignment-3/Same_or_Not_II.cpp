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
            this->next = NULL;
        }
};

class Stack
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
            Node* deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL) head = NULL;
            else tail->next = NULL;
            delete deleteNode;
        }

        int size()
        {
            return listSize;
        }

        bool empty()
        {
            if(listSize == 0) return true;
            else return false;
        }

        int top()
        {
            return tail->val;
        }
};

class Queue
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
            Node* deleteNode = head;
            head = head->next;
            if(head == NULL) tail = NULL;
            else head->prev = NULL;
            delete deleteNode;
        }

        int size()
        {
            return listSize;
        }

        bool empty()
        {
            if(listSize == 0) return true;
            else return false;
        }

        int front()
        {
            return head->val;
        }
};

int main()
{   
    int n, m;
    cin>>n>>m;

    Stack st;
    Queue qu;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }

    for(int i=0; i<m; i++)
    {
        int val;
        cin>>val;
        qu.push(val);
    }

    bool flg = true;

    if(n != m)
    {
        flg = false;
    }
    else
    {
        while(!st.empty())
        {
            if(st.top() != qu.front())
            {
                flg = false;
                break;
            }
            st.pop();
            qu.pop();
        }
    }

    if(flg) cout<<"YES";
    else cout<<"NO";

    return 0;
}