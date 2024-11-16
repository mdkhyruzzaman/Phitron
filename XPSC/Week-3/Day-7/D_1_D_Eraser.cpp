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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c = 0, r = 0;
        while (r < n)
        {
            if (s[r] == 'B')
            {
                c++;
                r += k;
            }
            else
                r++;
        }

        cout << c << endl;
    }
    return 0;
}