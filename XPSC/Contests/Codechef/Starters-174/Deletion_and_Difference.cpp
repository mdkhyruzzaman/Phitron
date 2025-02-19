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
        for (int i = 0; i < n; i++) cin >> v[i];

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
            if (mp[v[i]] == 2)
            {
                mp[v[i]] = 0;
                mp[0]++;
            }
        }

        int cnt = 0;
        for (auto [x, y] : mp)
        {
            if (y != 0) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}