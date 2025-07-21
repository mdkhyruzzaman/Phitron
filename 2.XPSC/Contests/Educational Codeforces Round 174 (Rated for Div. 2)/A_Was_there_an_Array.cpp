#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        bool is_start = false;
        int cntZero = 0;
        bool is_ans = true;
        for(int i = 0; i<n-2; i++) {
            int a;
            cin>>a;
            if(!is_start && a == 1) is_start = true;
            else if(is_start) {
                if(a == 0) cntZero++;
                else if(a == 1 && cntZero != 1) cntZero = 0;
                else {
                    is_ans = false;
                    break;
                };
            }
        }

        if(is_ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}