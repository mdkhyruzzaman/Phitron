#include <bits/stdc++.h>
using namespace std;
int func(int *&para)
{
    para = NULL;
}
int main()
{   
    int a = 5;
    cout<<a<<endl;
    int * p = &a;
    cout<<&a<<endl;
    func(p);
    cout<<p<<endl;
    cout<<a<<endl;
    return 0;
}