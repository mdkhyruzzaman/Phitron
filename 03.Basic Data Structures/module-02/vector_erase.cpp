#include <bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int>v= {1, 2, 3, 4, 5, 6};
    // v.erase(v.begin()+2); //Single Erase
    v.erase(v.begin()+2, v.end()-1);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}