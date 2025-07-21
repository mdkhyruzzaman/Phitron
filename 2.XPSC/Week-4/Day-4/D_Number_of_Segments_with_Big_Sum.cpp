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

    long long int l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= s)
        {
            ans += (n - r);
            sum -= v[l];
            l++;
        }
        r++;
    }

    if (ans == INT_MAX)
        cout << 0;
    else
        cout << ans;
    return 0;
}