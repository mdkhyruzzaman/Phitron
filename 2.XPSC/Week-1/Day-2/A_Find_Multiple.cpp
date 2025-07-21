#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int r = -1;
    for (int i = 1; i * c <= b; i++)
    {
        if (c * i >= a && c * i <= b)
        {
            r = c * i;
            break;
        }
    }

    cout << r;
    return 0;
}