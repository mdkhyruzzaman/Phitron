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
        int bSize = n * (n - 1) / 2;
        vector<int> a, b(bSize);
        for (int i = 0; i < bSize; i++)
            cin >> b[i];

        sort(b.begin(), b.end());

        int i = 0, k = n - 1;
        for (int i = 0; i < b.size();)
        {
            a.push_back(b[i]);
            i += k;
            k--;
        }

        for (auto val : a)
            cout << val << " ";
        cout << 1000000000 << endl;
    }
    return 0;
}