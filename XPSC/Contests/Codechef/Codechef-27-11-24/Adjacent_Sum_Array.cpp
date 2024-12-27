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
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> b[i];

        sort(b.begin(), b.end());
        vector<int> a(n);

        a[0] = 1;
        int aInx = 1;
        for (int val : b)
        {
            a[aInx] = val - a[aInx - 1];
            aInx++;
        }

        for (int val : a)
            cout << val << " ";

        cout << endl;
    }
    return 0;
}