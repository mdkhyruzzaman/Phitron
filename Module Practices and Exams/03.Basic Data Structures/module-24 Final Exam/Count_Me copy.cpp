#include<bits/stdc++.h>
using namespace std;

class WordList
{
    public:
        string word;
        int count;
        int lastS;
        WordList(string word, int count, int lastS)
        {
            this->word = word;
            this->count = count;
            this->lastS = lastS;
        }
};

bool cmp(WordList a, WordList b)
{
    if(a.count == b.count)
    {
        if(a.lastS < b.lastS)
        {
            return true;
        } else {
            return false;
        }
    }
    else if(a.count > b.count)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    map<string, pair<int, int>> mp;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        int ct = 1;
        while (ss >> word)
        {
            if(mp.count(word)) {
                pair<int, int> pa = mp[word];
                mp[word] = {pa.first+1, ct};
            }
            else
            {
                mp[word] = {1, ct};
            }
            ct++;
        }

        list<WordList> l;

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            WordList obj(it->first, it->second.first, it->second.second);
            l.push_back(obj);
        }

        l.sort(cmp);

        cout<<l.front().word<<" "<<l.front().count<<endl;
    }
    return 0;
}

