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
        int n, m, q;
        cin >> n >> m >> q;
        set<int> teacherList;
        set<int> rTeacherList;
        for (int i = 0; i < m; i++)
        {
            int t;
            cin >> t;
            teacherList.insert(t);
            rTeacherList.insert(-t);
        }

        for (int i = 0; i < q; i++)
        {
            int qi;
            cin >> qi;

            int d1, d2;
            int firstOrLast = -1;
            if (teacherList.lower_bound(qi) == teacherList.end())
            {
                firstOrLast = n - *teacherList.rbegin();
            }
            else
            {
                int nearbyUp = (*teacherList.lower_bound(qi));
                d1 = nearbyUp - qi;
            }

            if (rTeacherList.lower_bound(-qi) == rTeacherList.end())
            {
                firstOrLast = (*teacherList.begin()) - 1;
            }
            {
                int nearbyDown = abs(*rTeacherList.lower_bound(-qi));
                d2 = qi - nearbyDown;
            }

            if (firstOrLast == -1)
            {
                cout << (d1 + d2) / 2 << endl;
            }
            else
            {
                cout << firstOrLast << endl;
            }
        }
    }
    return 0;
}