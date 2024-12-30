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
        int n, k, l;
        cin >> n >> k >> l;
        priority_queue<int> playList;
        for (int i = 0; i < n; i++)
        {
            int mi, li;
            cin >> mi >> li;
            if (li == l)
                playList.push(mi);
        }

        if (playList.size() >= k)
        {
            int playListLength = 0;
            while (k--)
            {
                playListLength += playList.top();
                playList.pop();
            }
            cout << playListLength << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}