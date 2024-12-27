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
        int h, l, w;
        cin >> h >> l >> w;
        int perSq = 2 * (h * l + w * l + h * w);
        int rem = 1000 / perSq;
        cout << rem << endl;
    }
    return 0;
}