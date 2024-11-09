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

        priority_queue<int> numbers;
        for (int i = 1; i <= n; i++)
        {
            numbers.push(i);
        }

        vector<pair<int, int>> ops;

        for (int i = 1; i < n; i++)
        {
            int firstVal = numbers.top();
            numbers.pop();
            int secVal = numbers.top();
            numbers.pop();

            int newNumber = ceil((firstVal + secVal) / 2.0);
            ops.push_back({firstVal, secVal});
            numbers.push(newNumber);
        }

        cout << numbers.top() << endl;
        for (auto [a, b] : ops)
        {
            cout << a << " " << b << endl;
        }
    }

    return 0;
}