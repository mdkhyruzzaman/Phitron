#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, x, y;
    cin >> a >> x >> y;

    if (a <= (x + y))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}