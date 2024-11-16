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

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        long long maxSum = 0, op = 0;
        bool isNegative = false;

        for (int i = 0; i < n; i++)
        {
            maxSum += abs(v[i]);

            if (v[i] <= 0)
            {
                if (!isNegative && v[i] < 0)
                {
                    isNegative = true;
                    op++;
                }
            }
            else
            {
                isNegative = false;
            }
        }

        cout << maxSum << " " << op << endl;
    }
    return 0;
}