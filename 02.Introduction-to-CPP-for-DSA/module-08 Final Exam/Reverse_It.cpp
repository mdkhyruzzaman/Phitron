#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
};
int main()
{   
    int n;
    cin>>n;
    Student s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i].nm>>s[i].cls>>s[i].s>>s[i].id;
    }

    for(int i=0; i<n/2; i++)
    {
        swap(s[i].s, s[n-1-i].s);
    }

    for(int i=0; i<n; i++)
    {
        cout<<s[i].nm<<" "<<s[i].cls<<" "<<s[i].s<<" "<<s[i].id<<endl;
    }
    return 0;
}