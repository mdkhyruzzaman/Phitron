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

    sort(arr, arr+n, greater<int>());

    long long int total = arr[0];
    int active = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(active == 0)
        {
            break;
        }
        else if((active > arr[i]))
        {
            total+=arr[i];
            active = arr[i];
        }
        else
        {
            total+= active - 1;
            active = active - 1;
        }
    }

    cout<<total<<endl;

    return 0;
}