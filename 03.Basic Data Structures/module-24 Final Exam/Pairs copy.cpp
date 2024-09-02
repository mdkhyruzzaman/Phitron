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

class cmp
{
    public:
        bool operator()(PairList a, PairList b)
        {
            if(a.s == b.s)
            {
                if(a.i<=b.i)
                {
                    return true;
                } else {
                    return false;
                }
            }
            else if(a.s>b.s)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    priority_queue<PairList, vector<PairList>, cmp> pq;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int i;
        cin>>s>>i;
        PairList obj(s, i);
        pq.push(obj);
    }

    while(!pq.empty())
    {
        cout<<pq.top().s<<" "<<pq.top().i<<endl;
        pq.pop();
    }
    return 0;
}