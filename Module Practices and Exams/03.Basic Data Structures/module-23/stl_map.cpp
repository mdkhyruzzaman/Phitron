#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert({"Sakib Al Hasan", 75});
    mp.insert({"Musfiq", 45});
    mp.insert({"Tamim", 28});
    mp.insert({"Shanto", 48});

    cout<<mp.count("Shanto")<<endl;

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first<<endl;
    }
    return 0;
}