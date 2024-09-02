#include <bits/stdc++.h>
using namespace std;
int main()
{   
    queue<string> persons;
    int q;
    cin>>q;
    getchar();
    while(q--)
    {
        string command;
        getline(cin, command);
        stringstream commandstrem(command);
        string action, name;
        commandstrem>>action;
        if(action == "1")
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
        else if(action == "0")
        {
            commandstrem>>name;
            persons.push(name);
        }
    }
    return 0;
}