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
        int totalCho = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            totalCho += a;
        }

        int rem = totalCho % n;
        if (totalCho < n)
        {
            cout << "NO";
        }
        else if (rem * 1.00 / n <= k * 1.00)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}