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
        int v[n][m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> v[i][j];

        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long theSum = v[i][j];
                int x = j - 1;
                int y = j + 1;
                for (int k = i - 1; k >= 0; k--)
                {
                    if (x >= 0)
                    {
                        theSum += v[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        theSum += v[k][y];
                        y++;
                    }
                }
                x = j - 1;
                y = j + 1;
                for (int k = i + 1; k < n; k++)
                {
                    if (x >= 0)
                    {
                        theSum += v[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        theSum += v[k][y];
                        y++;
                    }
                }
                ans = max(ans, theSum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}