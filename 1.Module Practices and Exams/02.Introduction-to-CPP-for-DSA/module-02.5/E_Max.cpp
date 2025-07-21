#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int maxVal = arr[0];
    for(int i=0; i<n; i++)
    {
       maxVal = max(arr[i], maxVal);
    }

    cout<<maxVal;
}