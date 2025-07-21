#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    sort(arr, arr+n, greater<int>());

    map<int, vector<int>> mp;
    mp[0].push_back(arr[0]);
    for(int i = 1; i<n; i++)
    {
        if(mp[0].back()>arr[i]) mp[0].push_back(arr[i]);
        else
        {
            bool isInsert = false;
            for(int j = 1; j<mp.size(); j++)
            {
                if(mp[j].back()>arr[i])
                {
                    mp[j].push_back(arr[i]);
                    isInsert = true;
                    break;
                }
            }
            if(!isInsert)
            {
                mp[mp.size()].push_back(arr[i]);
            }
        }
    }

    cout<<mp.size();
    return 0;
}