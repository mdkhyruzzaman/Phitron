#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int flg = 0;

    while (ss>>word)
    {
        if(word == "Jessica")
        {
            flg = 1;
            break;
        }
    }

    if(flg == 1) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
