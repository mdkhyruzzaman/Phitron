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
        string s, c;
        cin >> s;
        set<int> ind;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            ind.insert(x);
        }

        cin >> c;
        sort(c.begin(), c.end());
        int cIndx = 0;
        for (int indi : ind)
        {
            s[indi - 1] = c[cIndx];
            cIndx++;
        }

        cout << s << endl;
    }

    return 0;
}