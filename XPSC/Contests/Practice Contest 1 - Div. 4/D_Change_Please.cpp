#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int re = 100-x;
        if(re%10==0)
        {
            cout<<re<<'\n';
        }
        else
        {
            for(int i = re; i>=0; i--)
            {
                if(i%10==0)
                {
                    cout<<i<<'\n';
                    break;
                }
            }
        }
    }
    return 0;
}