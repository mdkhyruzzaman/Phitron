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
        long long int n, l = 0;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
            cin >> v[i];

        long long int maxVal = 0, maxDis = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (maxVal < v[i])
                maxVal = v[i];
        }

        for (long long int i = 0; i < n; i++)
        {
            if (v[i] == maxVal)
            {
                if (maxDis < (i - l))
                {
                    maxDis = i - l;
                }
                l = i + 1;
            }
        }

        cout << maxDis << endl;
    }
    return 0;
}