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
        int n, x;
        cin >> n >> x;
        int A[n];
        int B[n];

        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < n; i++)
            cin >> B[i];

        int aWin = 0, bWin = 0;

        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; i++)
        {
            if (A[i] > B[i])
                aWin++;
            else
            {
                bWin++;
                pq.push(B[i] - A[i]);
            }
        }

        while (!pq.empty())
        {
            int d = pq.top();
            pq.pop();

            if (d + 1 <= x)
            {
                aWin++;
                bWin--;
                x = x - (d + 1);
            }
            else
            {
                break;
            }
        }

        if (aWin > bWin)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}