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
        int n, m, h;
        cin >> n >> m >> h;
        priority_queue<int> carCap;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            carCap.push(a);
        }

        priority_queue<int> energy;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            energy.push(a);
        }

        long long int maxEng = 0;
        while (!carCap.empty() && !energy.empty())
        {
            long long int cp = carCap.top();
            carCap.pop();
            long long int en = energy.top();
            energy.pop();

            if ((en * h) < cp)
                maxEng += en * h;
            else
                maxEng += cp;
        }

        cout << maxEng << endl;
    }
    return 0;
}