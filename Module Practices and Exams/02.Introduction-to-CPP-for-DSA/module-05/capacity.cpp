#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string str;
    cin>>str;
    cout<<str<<endl;
    cout<<str.size()<<endl;
    cout<<str.max_size()<<endl;
    cout<<str.capacity()<<endl;
    str.clear();
    cout<<"String is clear from here."<<endl;
    cout<<str.empty()<<endl;
    str = "Gello";
    str.resize(4);
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
    cout<<str<<endl;
    str.resize(6l, '*');
    cout<<str<<endl;
    return 0;
}