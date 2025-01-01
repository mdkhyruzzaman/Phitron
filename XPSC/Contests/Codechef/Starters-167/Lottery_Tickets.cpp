#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, lw = 1, up = 1000000, chef;
        cin >> n;
        cin >> chef;
        bool isMinHave = false, isMaxHave = false;
        for (ll i = 1; i < n; i++)
        {
            ll a;
            cin >> a;

            if (a == 1)
                isMinHave = true;
            else if (a == 1000000)
                isMaxHave = true;

            if (a < chef)
            {
                lw = max(a, lw);
            }
            else if (a > chef)
            {
                up = min(up, a);
            }
        }
        if (up == 1000000 && !isMaxHave)
        {
            cout << up - (chef - ((chef - lw) / 2)) + 1;
        }
        else if (lw == 1 && !isMinHave)
        {
            cout << chef + ((up - chef) / 2);
        }
        else
        {
            cout << ((chef - lw) / 2) + 1 + ((up - chef) / 2);
        }
        cout << endl;
    }
    return 0;
}