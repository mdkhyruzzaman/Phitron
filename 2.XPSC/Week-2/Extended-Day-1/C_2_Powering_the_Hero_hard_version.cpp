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
        priority_queue<int> bonusDeck;
        long long int maxPower = 0;
        for (int i = 0; i < n; i++)
        {
            int si;
            cin >> si;
            if (si == 0)
            {
                if (!bonusDeck.empty())
                {
                    maxPower += bonusDeck.top();
                    bonusDeck.pop();
                }
            }
            else
            {
                bonusDeck.push(si);
            }
        }

        cout << maxPower << endl;
    }
    return 0;
}