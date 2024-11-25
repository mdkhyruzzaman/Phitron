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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int w = INT_MAX;
        for (int val : v)
        {
            if (val >= k)
            {
                w = min(w, (val % k));
            }
        }

        if (w == INT_MAX)
            cout << -1 << endl;
        else
            cout << w << endl;
    }
    return 0;
}