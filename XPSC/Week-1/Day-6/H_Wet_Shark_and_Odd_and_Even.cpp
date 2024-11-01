#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int arr[n];
    long long int preSum = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        preSum += arr[i];
    }

    if(preSum%2 != 0)
    {
        sort(arr, arr+n);
        for(int i = 0; i<n; i++)
        {
            long long int temp = preSum - arr[i];
            if(temp%2 == 0) {
                preSum = temp;
                break;
            }
        }
    }

    cout<<preSum<<endl;
    return 0;
}