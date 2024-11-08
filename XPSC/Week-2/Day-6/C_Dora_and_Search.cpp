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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            s.insert(a);
        }

        bool isExist = false;
        int l = 1, r = n;
        while (l < r)
        {
            int leftVal = *s.begin();
            int rightVal = *s.rbegin();
            if (v[l - 1] == leftVal || v[l - 1] == rightVal)
            {
                s.erase(v[l - 1]);
                l++;
            }
            else if (v[r - 1] == leftVal || v[r - 1] == rightVal)
            {
                s.erase(v[r - 1]);
                r--;
            }
            else
            {
                isExist = true;
                break;
            }
        }

        if (isExist)
            cout << l << " " << r << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}