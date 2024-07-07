#include <bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int>v= {1, 2, 3, 2, 4, 5, 6};
    // vector<int>:: iterator it;
    // it = find(v.begin(), v.end(), 2);
    auto it = find(v.begin(), v.end(), 2);
    cout<<*it<<endl;
    if(it == v.end()) cout<<"Not Found!";
    else cout<<"Found!";
    return 0;
}