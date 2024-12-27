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
        int n, k, p;
        cin >> n >> k >> p;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            pq.push(a);
        }

        k += pq.top();
        pq.pop();
        while (!pq.empty())
        {
            p += pq.top();
            pq.pop();
        }

        if (p == k)
            cout << "Equal" << endl;
        else if (p > k)
            cout << "Varun" << endl;
        else if (k > p)
            cout << "Ved" << endl;
    }
    return 0;
}