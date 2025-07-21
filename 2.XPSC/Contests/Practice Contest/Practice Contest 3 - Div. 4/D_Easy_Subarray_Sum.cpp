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
        int lastPVal = -1;
        int negVal = 0;
        int negAfterLastP = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > 0)
            {
                lastPVal = i;
                negVal += negAfterLastP;
                negAfterLastP = 0;
            }
            if (a < 0 && lastPVal != -1)
                negAfterLastP++;
        }

        if (lastPVal == -1 || negVal == 0)
            cout << 0 << endl;
        else
            cout << negVal << endl;
    }
    return 0;
}