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
        if (n % 3 == 0)
            cout << "YES" << endl;
        else if (n % 4 == 0)
            cout << "YES" << endl;
        else if ((n % 4) - 3 == 0)
            cout << "YES" << endl;
        else
        {
            string ans = "NO";
            while (n > 0)
            {
                if (n % 3 == 0)
                {
                    ans = "YES";
                    break;
                }
                n -= 4;
            }
            cout << ans << endl;
        }
    }
    return 0;
}