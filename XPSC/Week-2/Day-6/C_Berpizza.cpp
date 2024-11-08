#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    set<pair<int, int>> cusSqList;
    multiset<pair<int, int>> cusMaxOrder;
    vector<int> sqOrder;
    cin >> q;
    int cusNo = 1;
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int money;
            cin >> money;
            cusSqList.insert({cusNo, money});
            cusMaxOrder.insert({-money, cusNo});
            cusNo++;
        }
        else if (op == 2)
        {
            int money = -cusSqList.begin()->second;
            int cusIndex = cusSqList.begin()->first;
            cusSqList.erase(cusSqList.begin());
            cusMaxOrder.erase({money, cusIndex});
            sqOrder.push_back(cusIndex);
        }
        else if (op == 3)
        {
            int money = -cusMaxOrder.begin()->first;
            int cusIndex = cusMaxOrder.begin()->second;
            cusMaxOrder.erase(cusMaxOrder.begin());
            cusSqList.erase({cusIndex, money});
            sqOrder.push_back(cusIndex);
        }
    }

    for (int s : sqOrder)
        cout << s << " ";
    return 0;
}