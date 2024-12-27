#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    if (x < 3)
        cout << 1;
    else if (x < 7)
        cout << 2;
    else
        cout << 3;
    return 0;
}