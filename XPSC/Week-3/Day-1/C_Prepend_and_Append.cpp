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
        string binStr;
        cin >> binStr;
        while (binStr.length() > 0 && binStr[0] != binStr[binStr.length() - 1])
        {
            binStr.erase(binStr.begin());
            auto it = binStr.end();
            it--;
            binStr.erase(it);
        }

        cout << binStr.length() << endl;
    }
    return 0;
}