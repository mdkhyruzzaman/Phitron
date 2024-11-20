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
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            mp[i] = a;
        }

        int sadCus = 0;
        for (int i = 1; i <= m; i++)
        {
            int b;
            cin >> b;
            if (mp[b] == 0)
                sadCus++;
            else
                mp[b]--;
        }

        cout << sadCus << endl;
    }
    return 0;
}