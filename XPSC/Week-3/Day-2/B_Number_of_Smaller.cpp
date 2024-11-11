#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }

    for (int i = 0; i < m; i++)
    {
        int bi;
        cin >> bi;
        b.push_back(bi);
    }

    vector<int> c;
    int idx = 0;
    int leftItem = 0;
    for (int vb : b)
    {
        for (idx; idx < n; idx++)
        {
            if (a[idx] < vb)
                leftItem++;
            else
            {
                break;
            }
        }
        c.push_back(leftItem);
    }

    for (int val : c)
    {
        cout << val << " ";
    }
    return 0;
}