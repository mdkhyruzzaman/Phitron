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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<char, int> mp;

        for (int i = 0; i < 28; i++)
        {
            char ch = 'a' + i;
            mp[ch] = 0;
        }

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            for (auto [key, val] : mp)
            {
                if (val == v[i])
                {
                    ans += key;
                    mp[key]++;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}