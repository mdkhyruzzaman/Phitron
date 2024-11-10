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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int minVal = INT_MAX;

        for (int i = 0; i < 3; i++)
        {
            int diff = arr[n - 3 + i] - arr[i];
            if (diff < minVal)
                minVal = diff;
        }

        cout << minVal << endl;
    }
    return 0;
}