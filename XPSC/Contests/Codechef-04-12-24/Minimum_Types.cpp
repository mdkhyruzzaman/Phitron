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
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        priority_queue<int> theVal;
        for (int i = 0; i < n; i++)
        {
            theVal.push(a[i] * b[i]);
        }

        int theSum = 0, cnt = 0;

        while (!theVal.empty())
        {
            cnt++;
            theSum += theVal.top();
            theVal.pop();

            if (theSum >= x)
                break;
        }

        if (theSum >= x)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}