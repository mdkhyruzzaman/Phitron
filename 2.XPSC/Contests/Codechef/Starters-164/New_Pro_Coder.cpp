#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float n, m;
    cin >> n >> m;
    if (n / 2 > m)
        cout << "PRO";
    else
        cout << "NEWBIE";
    return 0;
}