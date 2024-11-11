#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        mp[str] = i;
    }

    priority_queue<pair<int, string>> pq;
    for (auto [key, val] : mp)
    {
        pq.push({val, key});
    }

    while (!pq.empty())
    {
        string topStr = pq.top().second;
        pq.pop();
        string lastStr = topStr.substr(topStr.length() - 2);
        cout << lastStr;
    }
    return 0;
}