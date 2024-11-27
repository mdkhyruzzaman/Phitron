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
        int prefSum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            prefSum += a;
        }

        int passMark = (n + 1) * 100 / 2;
        if (passMark - prefSum < 0)
        {
            cout << 0 << endl;
        }
        else if (passMark - prefSum <= 100)
        {
            cout << passMark - prefSum << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}