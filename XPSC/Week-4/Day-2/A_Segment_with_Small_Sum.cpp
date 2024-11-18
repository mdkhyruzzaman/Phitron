#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, s;
    cin >> n >> s;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long int sumC = 0;
    int l = 0, r = 0, ans = 0;
    while (r < n)
    {
        sumC += v[r];
        if (sumC <= s)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sumC -= v[l];
            l++;
        }
        r++;
    }

    cout << ans;
    return 0;
}