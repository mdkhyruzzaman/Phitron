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

        string s, k;
        cin >> s >> k;

        int l = 0;
        long long minMov = LLONG_MAX;
        while (l <= n - m)
        {
            long long tmpMov = 0;
            for (int i = 0; i < m; i++)
            {
                int numS = s[l + i] - '0';
                int numK = k[i] - '0';
                tmpMov += min(abs(numK - numS), 10 - abs(numS - numK));
            }
            minMov = min(minMov, tmpMov);
            l++;
        }
        cout << minMov << endl;
    }
    return 0;
}