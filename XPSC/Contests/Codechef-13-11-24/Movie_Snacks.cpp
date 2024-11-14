#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    if (z < x + y)
    {
        cout << z * 2 + y;
    }
    else
    {
        cout << (x * 2 + y * 3);
    }
    return 0;
}