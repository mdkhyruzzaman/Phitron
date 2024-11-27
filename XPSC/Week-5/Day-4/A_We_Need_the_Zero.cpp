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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans = -1;
        int theLop = pow(2, 8);
        for (int i = 0; i < theLop; i++)
        {
            int theAns = 0;
            for (int val : v)
            {
                theAns ^= (val ^ i);
            }

            if (theAns == 0)
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}