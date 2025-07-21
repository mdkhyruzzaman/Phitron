#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 8, 7, 5, 6, 4};
    int n;
    cin>>n;
    v.push_back(n);
    int cur_idx = v.size()-1;
    while(cur_idx != 0)
    {
        int parent_idx = (cur_idx-1)/2;
        if(v[parent_idx]<v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
        }
        else
        {
            break;
        }

        cur_idx = parent_idx;
    }

    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}