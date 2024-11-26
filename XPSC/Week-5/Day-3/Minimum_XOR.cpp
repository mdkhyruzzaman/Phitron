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
        int XOR = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            XOR ^= v[i];
        }
        int ans = XOR;
        for (int val : v)
        {
            ans = min(ans, (XOR ^ val));
        }
        cout << ans << endl;
    }
    return 0;
}