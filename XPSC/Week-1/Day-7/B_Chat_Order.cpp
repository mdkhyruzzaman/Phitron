#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<string, int> messages;
    int lastUpdate = 1;
    while(n--)
    {
        string message;
        cin>>message;
        messages[message] = lastUpdate;
        lastUpdate++;
    }

    vector<pair<int, string>> updatedList;
    
    for(auto [message, updated]:messages)
    {
        updatedList.push_back({updated, message});
    }

    sort(updatedList.begin(), updatedList.end(), greater<pair<int, string>>());

    for(auto [updated, message]:updatedList)
    {
        cout<<message<<endl;
    }
    return 0;
}