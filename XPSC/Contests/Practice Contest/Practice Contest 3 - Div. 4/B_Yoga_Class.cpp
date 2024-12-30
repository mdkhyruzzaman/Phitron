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
        int n, x, y;
        cin >> n >> x >> y;

        if (x * 2 < y)
        {
            int sesY = n / 2;
            int remH = n % 2;
            cout << sesY * y + remH * x << endl;
        }
        else
        {
            cout << n * x << endl;
        }
    }
    return 0;
}