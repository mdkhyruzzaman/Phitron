#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
        long long int val;
        Node* next;
        Node(long long int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_node(Node* &head, Node* &tail, long long int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
}
int findValue(Node* head, long long val)
{
    Node* temp = head;
    int pos = 0;
    while(temp != NULL)
    {
        if(temp->val == val) return pos;
        else pos++;

        temp = temp->next;
    }

    return -1;
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        Node* head = NULL;
        Node* tail = NULL;
        while (true)
        {
            long long int val;
            cin>>val;
            if(val == -1)
            {
                break;
            }

            insert_node(head, tail, val);
        }

        long long int x;
        cin>>x;
        cout<<findValue(head, x)<<endl;
    }
    return 0;
}