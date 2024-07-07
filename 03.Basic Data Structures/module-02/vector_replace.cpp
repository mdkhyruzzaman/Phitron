#include <bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int>v= {1, 2, 3, 2, 4, 5, 6};
    replace(v.begin(), v.end(), 2, 200);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}