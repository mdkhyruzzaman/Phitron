#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        string word;
        cin>>word;
        for(int i = 0; i<word.length(); i++)
        {
            if(word[i] == 'B')
            {
                for(int lp = i-1; lp>=0; lp--)
                {
                    if(word[lp]>='A' && word[lp]<='Z')
                    {
                        word.erase(lp,1);
                        i--;
                        break;
                    }
                }
                word.erase(i, 1);
                i--;
            }
            else if(word[i] == 'b')
            {
                for(int lp = i-1; lp>=0; lp--)
                {
                    if(word[lp]>='a' && word[lp]<='z')
                    {
                        word.erase(lp,1);
                        i--;
                        break;
                    }
                }
                word.erase(i, 1);
                i--;
            }
        }

        cout<<word<<'\n';
    }
    return 0;
}