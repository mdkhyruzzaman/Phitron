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
        vector<int> v[n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int a;
                cin >> a;
                v[i].push_back(a);
            }
        }

        vector<int> ans;

        if (v[0][0] != v[1][0] && v[0][0] != v[2][0])
        {
            ans.push_back(v[1][0]);
            for (int val : v[0])
                ans.push_back(val);
        }
        else
        {
            ans.push_back(v[0][0]);
            for (int i = 0; i < n; i++)
            {
                if (v[0][0] != v[i][0])
                {
                    for (int val : v[i])
                        ans.push_back(val);
                }
            }
        }

        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}