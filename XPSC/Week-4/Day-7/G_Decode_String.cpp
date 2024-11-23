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
        string s;
        cin >> n >> s;

        vector<int> v;

        for (char c : s)
        {
            v.push_back(int(c) - 48);
        }

        string ans;

        int i = 0;
        while (i < n)
        {
            if (i + 2 < n && v[i + 2] == 0 && (i + 3 >= n || s[i + 3] != '0'))
            {
                int a = v[i] * 10 + v[i + 1];
                ans.push_back(char(int('a') + a - 1));
                i += 3;
            }
            else
            {
                ans.push_back(char(int('a') + v[i] - 1));
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}