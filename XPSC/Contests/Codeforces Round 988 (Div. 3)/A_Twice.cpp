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
        map<int, bool> mp;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (mp[a])
            {
                c++;
                mp[a] = false;
            }
            else
                mp[a] = true;
        }

        cout << c << endl;
    }
    return 0;
}