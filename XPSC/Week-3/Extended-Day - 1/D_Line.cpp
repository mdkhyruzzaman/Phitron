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
        string s;
        cin >> s;

        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                ans += (n - i - 1);
            }
            else
            {
                ans += i;
            }
        }

        vector<long long int> afterChange(n);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                afterChange[i] = i - (n - i - 1);
            }
            else
            {
                afterChange[i] = (n - i - 1) - i;
            }
        }

        sort(afterChange.rbegin(), afterChange.rend());

        for (int i = 0; i < n; i++)
        {
            if (afterChange[i] > 0)
                ans += afterChange[i];
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}