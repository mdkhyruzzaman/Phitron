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

Node* input_node()
{
    queue<Node*> q;
    int r;
    cin>>r;
    if(r == -1) return NULL;
    Node* root = new Node(r);
    q.push(root);
    
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();

        Node* left = NULL;
        Node* right = NULL;

        int l, r;
        cin>>l>>r;
        if(l != -1) {
            left = new Node(l);
        }

        if(r != -1)
        {
            right = new Node(r);
        }

        p->left = left;
        p->right = right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return root;
}

int sum_without_leaf(Node* root)
{
    if(root == NULL || (root->left == NULL && root->right == NULL)) return 0;

    int p = root->val;
    int l = sum_without_leaf(root->left);
    int r = sum_without_leaf(root->right);

    return p+l+r;
}

int main()
{
    Node* root = input_node();
    cout<<sum_without_leaf(root);
    return 0;
}