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

int main()
{
    map<string, WordList*> mp;
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
                mp[word]->count += 1;
                mp[word]->lastS = ct;
            }
            else
            {
                WordList* newWord = new WordList(word, 1, ct);
                mp.insert({word, newWord});
            }
            ct++;
        }

        string theWord;

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(mp[theWord]->count <= mp[word]->count && mp[theWord]->lastS > mp[word]->lastS)
            {
                theWord = word;
            }
        }

        cout<<theWord;
        // cout<<theWord<<" "<<mp[theWord]->count<<endl;
    }
    return 0;
}

