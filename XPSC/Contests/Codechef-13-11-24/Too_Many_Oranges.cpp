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
        int n, k;
        cin >> n >> k;
        int minSlice = n * 10;
        int maxSlice = n * 12;
        if (k >= minSlice && k <= maxSlice)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}