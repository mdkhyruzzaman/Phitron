#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        bool flg = true;
        for(int i=1; i<n; i++)
        {
            if(arr[i-1]>arr[i])
            {
                flg = false;
                break;
            }
        }
        if(flg) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}