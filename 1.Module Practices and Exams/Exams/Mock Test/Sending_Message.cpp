#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word1, word2;
    while(cin>>word1>>word2)
    {
        int w2I = 0;
        bool isPos = false;
        for(int i = 0; i<word1.length(); i++)
        {
            if(word1[i] == word2[w2I])
            {
                w2I++;
                if(w2I == word2.length())
                {
                    isPos = true;
                }
            }
        }

        if(isPos) cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
    }
    return 0;
}