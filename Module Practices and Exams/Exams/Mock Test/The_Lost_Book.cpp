#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int t;
    cin>>t;
    int having = -1;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == t) having = i;
    }

    cout<<having;
}