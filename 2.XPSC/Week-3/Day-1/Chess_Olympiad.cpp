#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int remainingGame = 4 - (x + y + z);
    float favTeamPoint = (remainingGame + x) + (y * 0.5);
    float oppTeamPoint = z + (y * 0.5);
    if (favTeamPoint > oppTeamPoint)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}