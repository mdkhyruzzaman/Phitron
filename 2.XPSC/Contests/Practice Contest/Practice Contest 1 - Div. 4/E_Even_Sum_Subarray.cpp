// Wrong Answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sumSubArr[n+1] = {0};
        for(int i = 1; i<=n; i++)
        {
            int val;
            cin>>val;
            sumSubArr[i] = sumSubArr[i-1]+val;
        }

        int result = 0;

        for(int i = n; i>0; i--)
        {
            if(sumSubArr[i]%2 == 0)
            {
                result=i;
                break;
            }
        }
        cout<<result<<'\n';
    }
    return 0;
}
