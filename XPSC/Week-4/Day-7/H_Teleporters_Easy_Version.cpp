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
        int n, c;
        cin >> n >> c;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] += (i + 1);
        }

        sort(v.begin(), v.end());

        long long int sum = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (sum + v[i] > c)
                break;
            sum += v[i];
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}