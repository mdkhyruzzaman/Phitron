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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long int theSum = 0;
        int posFractionCnt = 0, negFractionCnt = 0;
        for (int v : a)
        {
            theSum += (v / k);
            if (abs(v) % k != 0)
            {
                if (v < 0)
                    negFractionCnt++;
                else if (v > 0)
                    posFractionCnt++;
            }
        }

        if (theSum < 0)
        {
            if (abs(theSum) <= posFractionCnt)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (theSum > 0)
        {
            if (theSum <= negFractionCnt)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}