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
        cout << n << " ";
        for (int i = 1; i <= n / 2; i++)
        {
            if (i == n - i)
                cout << i;
            else
                cout << i << " " << n - i << " ";
        }
        cout << endl;
    }
    return 0;
}