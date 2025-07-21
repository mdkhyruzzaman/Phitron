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
        int n, m;
        cin >> n >> m;

        if (n > m || (n % 2 == 0 && m % 2 == 1))
            cout << "NO";
        else
        {
            cout << "YES" << endl;
            if (n % 2 == 0 && m % 2 == 0)
            {
                for (int i = 1; i <= n - 2; i++)
                {
                    cout << "1 ";
                }
                cout << (m - n + 2) / 2 << " ";
                cout << (m - n + 2) / 2;
            }
            else
            {
                for (int i = 1; i <= n - 1; i++)
                {
                    cout << "1 ";
                }
                cout << (m - n + 1);
            }
        }
        cout << endl;
    }
    return 0;
}