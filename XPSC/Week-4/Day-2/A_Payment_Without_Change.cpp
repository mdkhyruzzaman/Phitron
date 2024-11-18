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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int aU = s / n;
        if (a <= aU)
        {
            aU = a;
        }

        if (aU * n + b >= s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}