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
        int x, y, k;
        cin >> x >> y >> k;
        for (int i = 0; i < k; i++)
        {
            if (x == y)
            {
                break;
            }
            else
            {
                int gcdv = __gcd(x, y);
                if (x > y)
                {
                    x = gcdv;
                }
                else
                {
                    y = gcdv;
                }

                int lcmv = lcm(x, y);
                if (x > y)
                {
                    x = lcmv;
                }
                else
                {
                    y = lcmv;
                }
            }
        }

        cout << x + y << endl;
    }
    return 0;
}