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
        int n, m, k;
        cin >> n >> m >> k;
        if (((n + m) * 2) < k)
        {
            cout << k - ((n + m) * 2) << endl;
        }
        else
        {
            if (k <= 4)
            {
                cout << 4 - k << endl;
            }
            else if (k % 2 == 0)
            {
                cout << 0 << endl;
            }
            else if (k % 2 == 1)
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}