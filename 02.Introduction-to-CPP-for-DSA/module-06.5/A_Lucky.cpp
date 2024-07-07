#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int it=0; it<t; it++)
    {
        string ticket;
        cin>>ticket;
        int firstSum = 0;
        int lastSum = 0;
        for(int i = 0; i<3; i++)
        {
            firstSum+=int(ticket[i]-'0');
            lastSum+=int(ticket[ticket.size()-1-i]-'0');
        }
        if(firstSum == lastSum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}