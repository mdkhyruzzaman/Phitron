#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        float n, x, ttl = 0;
        cin>>n>>x;
        for(int i = 0; i<n; i++) 
        {
            int a;
            cin>>a;
            ttl+=a;
        }
        cout<<ceil(ttl/x)<<endl;
    }
    return 0;
}