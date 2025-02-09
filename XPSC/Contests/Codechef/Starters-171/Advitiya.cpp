#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string fixStr = "ADVITIYA", inpStr;
        cin>>inpStr;
        int cnt = 0;
        for(int i = 0; i < 8; i++)
        {
            if(inpStr[i]<fixStr[i])
            {
                cnt += int(fixStr[i]) - int(inpStr[i]);
            } else if (inpStr[i]>fixStr[i]) {
                cnt += 26 - (int(inpStr[i]) - int(fixStr[i]));
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}