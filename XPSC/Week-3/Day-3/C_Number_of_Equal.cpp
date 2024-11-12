#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<int, int> mpa;
    map<int, int> mpb;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mpa[a]++;
    }

    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        mpb[b]++;
    }

    long long int theVal = 0;

    for (auto [key, val] : mpa)
    {
        if (mpb[key] != 0)
        {
            theVal += (1LL * val * mpb[key]);
        }
    }

    cout << theVal;
    return 0;
}