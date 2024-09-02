#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        map<string, pair<int, int>> mp;
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        int ct = 1;
        while (ss >> word)
        {
            if(mp.count(word)) {
                mp[word] = {mp[word].first+1, ct};
            }
            else
            {
                mp.insert({word, {1, ct}});
            }
            ct++;
        }

        string theWord = word;

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(mp[theWord].first <= it->second.first && mp[theWord].second > it->second.second)
            {
                theWord = it->first;
            }
        }

        cout<<theWord<<" "<<mp[theWord].first<<endl;
    }
    return 0;
}