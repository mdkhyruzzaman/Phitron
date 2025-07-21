#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        map<string, int> mp;
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        ss >> word;
        mp[word]++;
        string theWord = word;
        while (ss >> word)
        {
            mp[word]++;
            if(mp[theWord] < mp[word])
            {
                theWord = word;
            }
        }

        cout<<theWord<<" "<<mp[theWord]<<endl;
    }
    return 0;
}

