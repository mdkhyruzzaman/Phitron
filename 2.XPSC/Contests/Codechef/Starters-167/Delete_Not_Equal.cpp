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
        int cntZero = 0, cntOne = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cntZero++;
            else
                cntOne++;
        }

        if (cntZero == 0 || cntOne == 0)
            cout << n << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}