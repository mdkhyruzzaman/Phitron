#include <bits/stdc++.h>
using namespace std;

long long int factorial(int m)
{
    if (m == 1)
        return 1;
    else
        return (m * factorial(m - 1));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    long long int fac = factorial(m);
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = a * fac;
    }

    for (auto val : v)
    {
        long long int dc = 2;
        for (long long int i = 2; i <= val / 2; i++)
        {
            if (val % i == 0)
                dc++;
        }
        cout << dc << " ";
    }
    return 0;
}