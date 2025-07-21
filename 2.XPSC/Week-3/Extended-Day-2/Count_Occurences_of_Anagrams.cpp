//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string &pat, string &txt)
    {

        map<char, int> mp1, mp2;
        for (char val : pat)
        {
            mp1[val]++;
        }

        int l = 0, r = 0, cnt = 0;
        int txtLen = txt.length();
        while (r < txtLen)
        {
            mp2[txt[r]]++;
            bool match = true;
            for (auto i = mp1.begin(); i != mp1.end(); i++)
            {
                char ch = i->first;
                if (mp1[ch] != mp2[ch])
                {
                    match = false;
                }
            }
            if (r - l + 1 == pat.size())
            {

                if (match)
                    cnt++;
                mp2[txt[l]]--;
                l++;
            }
            r++;
        }

        return cnt;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends