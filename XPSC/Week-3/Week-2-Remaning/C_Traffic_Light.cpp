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
        char currentLight;
        cin >> n >> currentLight;
        string lights;
        cin >> lights;

        if (currentLight == 'g')
        {
            cout << 0 << endl;
        }
        else
        {

            set<int> greenLightPos;

            for (int i = 0; i < n; i++)
            {
                if (lights[i] == 'g')
                    greenLightPos.insert(i);
            }

            int minTime = 0;
            priority_queue<int> times;

            for (int i = 0; i < n; i++)
            {
                if (lights[i] == currentLight)
                {
                    auto it = greenLightPos.lower_bound(i);

                    int currentTime;
                    if (it != greenLightPos.end())
                    {
                        currentTime = *it - i;
                    }
                    else
                    {
                        currentTime = (n - i) + *greenLightPos.begin();
                    }
                    times.push(currentTime);
                }
            }
            cout << times.top() << endl;
        }
    }

    return 0;
}