#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int it=0; it<t; it++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int letterCount[26] = {0};
        int balloons = 0;
        for(int i=0; i<n; i++)
        {
            if(letterCount[int(s[i]-'A')]>0)
            {
                balloons+=1;
            }
            else
            {
                balloons += 2;
                letterCount[int(s[i]-'A')] = 1;
            }
        }
        cout<<balloons<<endl;
    }
    return 0;
}