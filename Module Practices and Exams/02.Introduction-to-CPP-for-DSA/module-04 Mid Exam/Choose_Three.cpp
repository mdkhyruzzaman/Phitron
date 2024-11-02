#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, s, flg=0;
        cin>>n>>s;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        sort(arr, arr+n);
        if(n>=3)
        {
            for(int j=0; j<n-2 && flg==0; j++)
            {
                for(int k=j+1; k<n-1 && flg==0; k++)
                {
                    for(int m=k+1; m<n && flg==0; m++)
                    {
                        if(arr[j]+arr[k]+arr[m] == s)
                        {
                            flg = 1;
                        }
                    }
                }
            }
        }
        if(flg==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}