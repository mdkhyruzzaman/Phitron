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
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            bool isFirst = true;
            for (int i = 0; i < n; i += 2)
            {
                if (isFirst)
                {
                    cout << "AA";
                    isFirst = false;
                }
                else
                {
                    cout << "BB";
                    isFirst = true;
                }
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}