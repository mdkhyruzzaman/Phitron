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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a] = i + 1;
        }

        int ans = 0;

        for (auto [key, val] : mp)
        {
            ans += val;
        }

        cout << ans << endl;
    }
    return 0;
}