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
        int a, b;
        cin >> a >> b;

        int x = a > b ? a : b;
        int ans = (a ^ x) + (b ^ x);

        cout << ans << endl;
    }
    return 0;
}