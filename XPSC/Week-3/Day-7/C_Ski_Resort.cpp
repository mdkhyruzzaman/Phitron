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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        long long int ans = 0, c = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                c++;
                if (i == n - 1 || v[i + 1] > q)
                {
                    if (c >= k)
                    {
                        long long int x = c - k + 1;
                        ans += (x * (x + 1)) / 2;
                    }
                    c = 0;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}