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
        map<string, vector<int>> persons;
        for (int p = 0; p < 3; p++)
        {
            for (int i = 0; i < n; i++)
            {
                string word;
                cin >> word;
                persons[word].push_back(p);
            }
        }

        vector<int> person(3, 0);

        for (auto [word, value] : persons)
        {
            if (value.size() == 1)
            {
                for (auto per : value)
                {
                    person[per] += 3;
                }
            }
            else if (value.size() == 2)
            {
                for (auto per : value)
                {
                    person[per] += 1;
                }
            }
        }
        for (auto val : person)
            cout << val << " ";
        cout << '\n';
    }
    return 0;
}