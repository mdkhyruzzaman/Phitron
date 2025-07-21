#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}

int main()
{   
    cout<<Rakib::age<<endl;
    return 0;
}