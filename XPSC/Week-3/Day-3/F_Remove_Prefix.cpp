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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        map<int, int> mp;
        int pos = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[v[i]] >= 1)
            {
                pos = i + 1;
                break;
            }
            else
            {
                mp[v[i]]++;
            }
        }

        cout << pos << endl;
    }
    return 0;
}