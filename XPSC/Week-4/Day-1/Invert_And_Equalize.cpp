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
        string s;
        cin >> s;
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1])
                c++;
        }

        cout << c / 2 << endl;
    }
    return 0;
}