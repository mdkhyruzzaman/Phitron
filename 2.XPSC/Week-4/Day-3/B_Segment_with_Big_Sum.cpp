#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long int s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = 0;
    long long int sum = 0;
    int op = n + 1;
    while (r <= n)
    {
        if (sum >= s)
        {
            op = min(op, r - l);
            sum -= v[l];
            l++;
        }
        else
        {
            if (n == r)
                break;
            sum += v[r];
            r++;
        }
    }

    if (op == n + 1)
        cout << -1;
    else
        cout << op;
    return 0;
}