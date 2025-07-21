// Wrong Answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a;
    cin>>a;
    while(a--)
    {
        int n, k;
        cin>>n>>k;
        string s, t;
        int si = -1, sj = -1;
        int c = 0;
        
        while(c<=k){
        for(int i=0; i<n; i++)
        {
            if(s[i] != t[i])
            {
                if(si == -1)
                {
                    si = i;
                }
                else
                {
                    sj = i;
                }
                if(si != -1 && sj != -1)
                {
                    swap(s[si], s[sj]);
                    si = -1;
                    sj = -1;
                    c++;
                    if(c==k) break;
                }
            }
        }
        c++;
        }

        if(s == t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
