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
        int firstB = -1;
        int lastB = -1;
        for(int i = 0; i<n; i++)
        {
            char ch;
            cin>>ch;
            if(ch == 'B' && firstB == -1) 
            {
                firstB = i;
                lastB = i;
            }
            else if(ch == 'B') lastB = i;
        }
        cout<<lastB-firstB+1<<endl;
    }
    return 0;
}