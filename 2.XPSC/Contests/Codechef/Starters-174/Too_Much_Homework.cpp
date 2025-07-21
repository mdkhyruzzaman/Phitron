#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    if ((100 - x) <= (10 * y)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}