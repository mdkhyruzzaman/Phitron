#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }

        int smallest = arr[0]+arr[1]+1;
        for(int j=0; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                smallest = min(smallest, arr[j]+arr[k]+k-j);
            }
        }

        cout<<smallest<<endl;
    }
    return 0;
}