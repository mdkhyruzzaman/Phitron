#include <bits/stdc++.h>
using namespace std;
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<string> persons;

    int q;
    cin>>q;

    while(q--)
    {
        int action;
        string name;

        cin>>action;
        if(action == 0)
        {
            cin>>name;
        }
        if(action == 1)
        {
            if(!persons.empty())
            {
                cout<<persons.front()<<endl;
                persons.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
        else if(action == 0)
        {
            persons.push(name);
        }
    }
    return 0;
}