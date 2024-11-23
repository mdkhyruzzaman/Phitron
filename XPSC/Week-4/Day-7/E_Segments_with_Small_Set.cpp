#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long int ans = 0;
    int l = 0, r = 0, seqLen = 0;
    map<int, int> cnt;
    while (r < n)
    {
        cnt[v[r]]++;
        if (cnt[v[r]] == 1)
            seqLen++;
        while (seqLen > k)
        {
            cnt[v[l]]--;
            if (cnt[v[l]] == 0)
                seqLen--;
            l++;
        }
        ans += r - l + 1;
        r++;
    }

    cout << ans << endl;
    return 0;
}