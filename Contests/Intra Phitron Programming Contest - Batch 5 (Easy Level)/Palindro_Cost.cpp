#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int q;
    string s;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int k;
        cin>>s>>k;
        int len = s.length();
        int isPalindro = 1;
        for(int j=0; j<len/2 && isPalindro==1; j++)
        {
            if(s[j]==s[len-1-j])
            {
                continue;
            }
            else{
                isPalindro = 0;
            }
        }

        if(isPalindro == 1)
        {
            cout<<"YES";
        }
        else
        {
            for(int j=0; j<len/2 && k>=0; j++)
            {
                if(s[j]==s[len-1-j])
                {
                    continue;
                }
                else{
                    if(s[j]>s[len-1-j])
                    {
                        k = k - ((s[j]-96)-(s[len-1-j]-96));

                    }
                    else{
                        k = k - ((s[len-1-j]-96)-(s[j]-96));
                    }
                }
            }
            
            if(k>=0)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";    
            }
        }

        cout<<endl;
    }
    return 0;
}
