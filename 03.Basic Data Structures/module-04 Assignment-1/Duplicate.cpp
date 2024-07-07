#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    long long int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);
    bool flg = false;
    for(int i=1; i<n; i++)
    {
        if(arr[i-1] == arr[i])
        {
            flg = true;
            break;
        }
    }

    if(flg)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}