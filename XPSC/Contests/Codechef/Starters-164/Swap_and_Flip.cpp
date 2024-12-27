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
        string s, t;
        cin >> s >> t;

        int totalZeroInS = 0;
        int totalZeroInT = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                totalZeroInS++;
            if (t[i] == '0')
                totalZeroInT++;
        }

        if ((totalZeroInS % 2 != 0 && totalZeroInT % 2 == 0) || (totalZeroInS % 2 == 0 && totalZeroInT % 2 != 0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}