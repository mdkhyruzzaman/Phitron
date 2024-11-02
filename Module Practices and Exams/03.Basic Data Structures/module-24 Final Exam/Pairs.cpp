#include<bits/stdc++.h>
using namespace std;
class PairList
{
    public:
        string s;
        int i;
        PairList(string s, int i)
        {
            this->s = s;
            this->i = i;
        }
};

bool cmp(PairList a, PairList b)
{
    if(a.s == b.s)
    {
        if(a.i >= b.i)
        {
            return true;
        } else {
            return false;
        }
    }
    else if(a.s < b.s)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    list<PairList> l;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int i;
        cin>>s>>i;
        PairList obj(s, i);
        l.push_back(obj);
    }

    l.sort(cmp);

    for(auto it=l.begin(); it!=l.end(); it++)
    {
        cout<<it->s<<" "<<it->i<<endl;
    }

    return 0;
}