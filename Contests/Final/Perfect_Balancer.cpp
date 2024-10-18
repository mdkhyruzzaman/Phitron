#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    long long int leftSum = 0;

    bool isExists = false;

    for (int i = 0; i < n; i++)
    {
        leftSum += arr[i];
        long long int rightSum = total - leftSum + arr[i];

        if (rightSum == leftSum)
        {
            cout << leftSum << " " << i + 1 << endl;
            isExists = true;
            break;
        }
    }

    if (!isExists) cout << "UNSTABLE" << endl;

    return 0;
}