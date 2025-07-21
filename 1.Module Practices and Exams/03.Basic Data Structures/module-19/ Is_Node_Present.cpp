#include <bits/stdc++.h>
using namespace std;

class Node 
{
    public:
        int val;
        Node* left;
        Node* right;

        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void input_tree(Node* & root)
{
    int val;
    queue<Node*> q;
    if(root == NULL)
    {
        cin>>val;
        root = new Node(val);

        q.push(root);
    }

    while(!q.empty())
    {
        Node* parant = q.front();
        q.pop();
    }
}

int main() {
    Node* root = NULL;
    return 0;
}