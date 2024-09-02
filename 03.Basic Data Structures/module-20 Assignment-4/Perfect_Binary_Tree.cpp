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

int perfect_tree(Node* root)
{
    if(root == NULL) return 0;

    int l = perfect_tree(root->left);
    int r = perfect_tree(root->right);

    if(l==r) return l+r+1;
    return -1;
}

int main()
{
    Node* root = input_tree();
    if(perfect_tree(root) != -1) cout<<"YES";
    else cout<<"NO";
    return 0;
}