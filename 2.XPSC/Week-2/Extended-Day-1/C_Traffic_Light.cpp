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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        int minTime = 0;
        if (c != 'g')
        {
            multiset<int> greenPos;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'g')
                    greenPos.insert(i);
            }

            for (int i = 0; i < n; i++)
            {
                if (s[i] == c)
                {
                    auto it = greenPos.lower_bound(i);

                    int ctime;
                    if (it != greenPos.end())
                    {
                        ctime = *it - i;
                    }
                    else
                    {
                        ctime = (n - i) + *greenPos.begin();
                    }
                    minTime = max(ctime, minTime);
                }
            }
        }
        cout << minTime << endl;
    }
    return 0;
}