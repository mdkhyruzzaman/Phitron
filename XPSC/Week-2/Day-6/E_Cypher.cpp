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
        int initial[n];
        for (int i = 0; i < n; i++)
        {
            cin >> initial[i];
        }

        for (int i = 0; i < n; i++)
        {
            int a;
            string b;
            cin >> a >> b;
            for (int j = 0; j < a; j++)
            {
                if (b[j] == 'U')
                {
                    if (initial[i] == 0)
                        initial[i] = 9;
                    else
                        initial[i]--;
                }
                else
                {
                    if (initial[i] == 9)
                        initial[i] = 0;
                    else
                        initial[i]++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << initial[i] << " ";
        }

        cout << endl;
    }
    return 0;
}