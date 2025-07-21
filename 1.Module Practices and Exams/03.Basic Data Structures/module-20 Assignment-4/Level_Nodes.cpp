#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        int level;
        Node(int val, int level)
        {
            this->val = val;
            this->level = level;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* input_tree()
{
    int r;
    cin>>r;
    if(r == -1) return NULL;
    Node* root = new Node(r, 0);
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        Node* left = NULL;
        Node* right = NULL;
        int l, r;
        cin>>l>>r;
        if(l != -1) left = new Node(l, parent->level+1);
        if(r != -1) right = new Node(r, parent->level+1);

        parent->left = left;
        parent->right = right;

        if(left) q.push(left);
        if(right) q.push(right);
    }

    return root;
}

void print_tree(Node* root, int level)
{
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);

    bool isInvalid = true;

    while (!q.empty())
    {
        Node* nd = q.front();
        q.pop();

        if(nd->level>level) break;

        if(nd->level == level) 
        {
            cout<<nd->val<<" ";
            isInvalid = false;
        }

        if(nd->left) q.push(nd->left);
        if(nd->right) q.push(nd->right);
    }

    if(isInvalid) cout<<"Invalid";
}

int main()
{
    Node* root = input_tree();
    int level;
    cin>>level;
    print_tree(root, level);
    return 0;
}