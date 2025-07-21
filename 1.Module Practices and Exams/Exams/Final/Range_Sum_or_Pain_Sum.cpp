#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;
    int arr[n+1] = {0};
    int preSum[n+1] = {0};
    int inx = 1;
    for(int i = 2; i<=n+1; i++)
    {
        arr[inx] = i/2;
        preSum[inx] = preSum[inx-1]+arr[inx];
        inx++;
    }

    while(q--)
    {
        int l, r;
        cin>>l>>r;
        cout<<preSum[r]-preSum[l-1]<<endl;
    }
    return 0;
}