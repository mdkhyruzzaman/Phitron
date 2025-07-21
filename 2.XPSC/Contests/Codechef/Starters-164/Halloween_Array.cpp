#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int f = 0;
        for (int i = 1; i < n; i++)
            if (a[i] == a[i - 1])
                f = 1;
        int x = 0;
        if (f == 1)
        {
            if (0 >= l && 0 <= r)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        if (n > 8)
        {
            cout << "NO" << endl;
            continue;
        }
        long long int pro = 1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long int k = a[i] ^ a[j];
                if (k == 0)
                {
                    pro = 0;
                    continue;
                }
                if (pro > r / k)
                {
                    pro = r + 1;
                    continue;
                }
                pro = pro * k;
            }
            if (pro == 0 || pro == r)
                continue;
        }
        if (pro >= l && pro <= r)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
