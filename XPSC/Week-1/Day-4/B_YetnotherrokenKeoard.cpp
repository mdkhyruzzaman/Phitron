#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string word;
        cin >> word;

        vector<pair<int, char>> lowerChar, upperChar;

        for (int i=0; i<word.length(); i++)
        {    
            char ch=word[i];
            if (islower(ch))
            {
                if (ch == 'b')
                {
                    if (!lowerChar.empty())
                    {
                        lowerChar.pop_back();
                    }
                }
                else
                {
                    lowerChar.push_back({i, ch});
                }
            }
            else
            {
                if (ch == 'B')
                {
                    if (!upperChar.empty())
                    {
                        upperChar.pop_back();
                    }
                }
                else
                {
                    upperChar.push_back({i, ch});
                }
            }
        }

        int lowerIndex = 0, upperIndex = 0;
        string result;
        for (int i=0; i<word.length(); i++)
        {
            char ch=word[i];
            if (lowerIndex<lowerChar.size()){
                auto [lowerIdx, lowerCh] = lowerChar[lowerIndex];
                if(ch == lowerCh && i == lowerIdx)
                {
                    result.push_back(ch);
                    lowerIndex++;
                }
            }
            if(upperIndex<upperChar.size())
            {
                auto [upperIdx, upperCh] = upperChar[upperIndex];
                if(ch == upperCh && i == upperIdx)
                {
                    result.push_back(ch);
                    upperIndex++;
                }
            }
        }

        cout << result << '\n';
    }
    return 0;
}