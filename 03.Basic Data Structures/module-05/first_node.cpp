#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
};
int main()
{   
    Node a, b;
    a.val = 5;
    b.val = 12;

    a.next = &b;
    b.next = NULL; // if any next property have not address value this assign NULL
    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;
    return 0;
}