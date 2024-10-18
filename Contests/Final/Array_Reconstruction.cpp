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
        long long int afterSum = 0;
        for(int i=0; i<n-2; i++)
        {
            int ai;
            cin>>ai;
            afterSum+=ai;
        }

        long long int beforeSum;
        cin>>beforeSum;

        cout<<beforeSum - afterSum + 1<<endl;
    }
    return 0;
}