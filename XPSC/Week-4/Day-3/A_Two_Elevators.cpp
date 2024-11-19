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
        int a, b, c;
        cin >> a >> b >> c;

        int el1 = abs(a - 1);
        int el2 = abs(c - b) + abs(c - 1);

        if (el1 == el2)
            cout << 3 << endl;
        else if (el1 < el2)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}