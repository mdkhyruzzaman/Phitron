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

Node* input_tree()
{
    int r;
    cin>>r;
    if(r == -1) return NULL;
    Node* root = new Node(r);
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
        if(l != -1) left = new Node(l);
        if(r != -1) right = new Node(r);

        parent->left = left;
        parent->right = right;

        if(left) q.push(left);
        if(right) q.push(right);
    }

    return root;
}

vector<int> v;

void print_tree(Node* root)
{
    if(root == NULL) return;
    queue<Node*> q;
    if(root->left == NULL && root->right == NULL) 
    {
        v.push_back(root->val);
    }
    else{
        q.push(root);
    }

    while (!q.empty())
    {
        Node* nd = q.front();
        q.pop();

        if(nd->left == NULL && nd->right == NULL) 
        {
            v.push_back(nd->val);
        }
        else{
            if(nd->left) q.push(nd->left);
            if(nd->right) q.push(nd->right);
        }
    }
    
}

int main()
{
    Node* root = input_tree();
    print_tree(root);
    sort(v.begin(), v.end(), greater<int>());
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}