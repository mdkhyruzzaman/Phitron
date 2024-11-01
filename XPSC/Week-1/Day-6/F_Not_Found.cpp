#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string result = "None";
    for (char c = 'a'; c <= 'z'; c++)
    {
        if(s.find(c) > s.length()){
            result = c;
            break;
        }
    }

    cout << result << endl;

    return 0;
}