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

void print_outer_tree(Node* root, char arrow)
{
    if(root == NULL) return;
    if(arrow == 'L') {
        if(root->left){
            print_outer_tree(root->left, arrow);
        }
        else {
            print_outer_tree(root->right, arrow);
        }

        cout<<root->val<<" ";
    }

    if(arrow == 'R') {
        cout<<root->val<<" ";
        
        if(root->right){
            print_outer_tree(root->right, arrow);
        }
        else {
            print_outer_tree(root->left, arrow);
        }
    }
}

int main()
{
    Node* root = input_tree();
    if(root->left) print_outer_tree(root->left, 'L');
    cout<<root->val<<" ";
    if(root->right) print_outer_tree(root->right, 'R');
    return 0;
}