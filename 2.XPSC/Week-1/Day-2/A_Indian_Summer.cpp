#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++)
    {
        string tree, leaf;
        cin >> tree >> leaf;
        v.push_back({tree, leaf});
    }

    sort(v.begin(), v.end());

    auto [prevTree, prevLeaf] = v[0];
    int uniqueTreeLeaf = 1;

    for (auto [tree, leaf] : v)
    {
        if (prevTree == tree && prevLeaf == leaf)
            continue;
        else
        {
            prevTree = tree;
            prevLeaf = leaf;
            uniqueTreeLeaf++;
        }
    }

    cout<<uniqueTreeLeaf;
    return 0;
}