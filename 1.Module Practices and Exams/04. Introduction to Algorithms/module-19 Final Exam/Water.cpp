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
        int arrH[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arrH[i];
        }
        int lh = 0, rh = n-1;
        int l = lh, r = rh;
        while(l<r)
        {
            if(arrH[l] < arrH[r])
            {
                l++;
                if(arrH[lh] < arrH[l] && l<r)
                {
                    lh = l;
                }
            }
            else
            {
                r--;
                if(arrH[rh] < arrH[r] && l<r)
                {
                    rh = r;
                }
            }
        }
        cout<<lh<<" "<<rh<<endl;
    }
    return 0;
}