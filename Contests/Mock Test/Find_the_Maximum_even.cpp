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

    int max_even = 0;

    for(int i = 0; i<n; i++)
    {
        if(arr[i]%2 == 0 && arr[i]>max_even) max_even = arr[i];
    }

    int max_even_sum = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if((arr[i]+arr[j])%2 == 0 && (arr[i]+arr[j])>max_even_sum)
            {
                max_even_sum = (arr[i]+arr[j]);
            }
        }
    }

    if(max_even>max_even_sum) cout<<max_even<<endl;
    else cout<<max_even_sum<<endl;
}