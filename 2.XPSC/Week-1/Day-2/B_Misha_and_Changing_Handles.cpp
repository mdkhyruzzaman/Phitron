#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++)
    {
        string oldHandle, newHandle;
        cin >> oldHandle >> newHandle;
        v.push_back({oldHandle, newHandle});
    }

    vector<pair<string, string>> nv;

    for (auto [oldHandle, newHandle] : v)
    {
        bool match = false;
        for (int i=0; i<nv.size();i++)
        {
            if(oldHandle == nv[i].second)
            {
                nv[i].second = newHandle;
                match = true;
                break;
            }
        }
        if(!match)
        {
            nv.push_back({oldHandle, newHandle});
        }
    }

    cout<<nv.size()<<endl;
    for (auto [oldHandle, newHandle] : nv)
    {
        cout<<oldHandle<<" "<<newHandle<<"\n";
    }
    return 0;
}