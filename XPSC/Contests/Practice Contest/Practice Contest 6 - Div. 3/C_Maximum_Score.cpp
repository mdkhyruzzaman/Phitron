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
        int n, cntOne = 0, cntZero = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 0)
                cntZero++;
            else
                cntOne++;
        }

        if (cntOne == 0 || cntZero == 0)
            cout << 0 << endl;
        else if (cntOne > cntZero)
            cout << cntZero << endl;
        else
            cout << cntOne << endl;
    }
    return 0;
}