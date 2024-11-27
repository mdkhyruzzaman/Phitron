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
        int curnt = n - k;
        int direction = 1;
        while (curnt)
        {
            cout << curnt << " ";
            if (curnt == n)
            {
                curnt -= k;
                direction = -1;
            }

            curnt += direction;
        }
        cout << endl;
    }
    return 0;
}