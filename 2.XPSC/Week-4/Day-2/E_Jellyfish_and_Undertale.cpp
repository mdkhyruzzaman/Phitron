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
        int a, b, n;
        cin >> a >> b >> n;

        long long int ans = b;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ans += min(a - 1, x);
        }

        cout << ans << endl;
    }
    return 0;
}