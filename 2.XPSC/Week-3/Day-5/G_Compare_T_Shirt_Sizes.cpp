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
        string a, b;
        cin >> a >> b;
        if (a[a.length() - 1] == b[b.length() - 1])
        {
            int ax = 0, bx = 0;
            for (int i = 0; i < a.length() - 1; i++)
                ax++;
            for (int i = 0; i < b.length() - 1; i++)
                bx++;

            if (a[a.length() - 1] == 'L')
            {
                if (ax > bx)
                    cout << ">" << endl;
                else if (bx > ax)
                    cout << "<" << endl;
                else
                    cout << "=" << endl;
            }
            else
            {
                if (ax > bx)
                    cout << "<" << endl;
                else if (bx > ax)
                    cout << ">" << endl;
                else
                    cout << "=" << endl;
            }
        }
        else
        {
            if ((a[a.length() - 1]) == 'L')
                cout << ">" << endl;
            else if ((a[a.length() - 1]) == 'S')
                cout << "<" << endl;
            else if ((b[b.length() - 1]) == 'L')
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
    }
    return 0;
}