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
        vector<int> songs;
        for (int i = 0; i < n; i++)
        {
            int song;
            cin >> song;
            songs.push_back(song);
        }
        string rating;
        cin >> rating;

        set<pair<int, int>> like;
        set<pair<int, int>> dislike;

        for (int i = 0; i < n; i++)
        {
            if (rating[i] == '1')
            {
                like.insert({songs[i], i});
            }
            else
            {
                dislike.insert({songs[i], i});
            }
        }

        int curRating = 1;
        vector<int> newRating(n);
        for (auto [pred, idx] : dislike)
        {
            newRating[idx] = curRating;
            curRating++;
        }

        for (auto [pred, idx] : like)
        {
            newRating[idx] = curRating;
            curRating++;
        }

        for (int rating : newRating)
        {
            cout << rating << " ";
        }

        cout << endl;
    }
    return 0;
}