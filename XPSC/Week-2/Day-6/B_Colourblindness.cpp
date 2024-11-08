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
        string firstRow, secRow;
        cin >> firstRow >> secRow;

        bool isIdentical = true;

        for (int i = 0; i < n; i++)
        {
            if ((firstRow[i] == secRow[i]) || (firstRow[i] == 'B' && 'G' == secRow[i]) || (firstRow[i] == 'G' && 'B' == secRow[i]))
                continue;
            else
                isIdentical = false;
        }

        if (isIdentical)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}