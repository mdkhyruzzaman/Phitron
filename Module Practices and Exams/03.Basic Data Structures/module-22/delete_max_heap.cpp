#include <bits/stdc++.h>
using namespace std;

vector<int> insert_heap()
{
    vector<int> v;
    int n;
    cin>>n;
    while(n)
    {
        int node;
        cin>>node;
        v.push_back(node);
        int cur_idx = v.size()-1;
        while(cur_idx != 0)
        {
            int parent_idx = (cur_idx-1)/2;
            if(v[parent_idx]<v[cur_idx])
            {
                swap(v[parent_idx], v[cur_idx]);
            }
            else
            {
                break;
            }

            cur_idx = parent_idx;
        }
        n--;
    }

    return v;
}

void print_heap(vector<int> v)
{
    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size()-1];
    v.pop_back();
    int cur_idx = 0;
    int last_idx = v.size()-1;

    while(true)
    {
        int left_idx = cur_idx*2+1;
        int right_idx = cur_idx*2+2;

        if(last_idx >= right_idx)
        {
            if(v[right_idx]>v[cur_idx] && v[right_idx]>=v[left_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else if(v[left_idx]>v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else
            {
                break;
            }
        }
        else if(last_idx >= left_idx)
        {
            if(v[left_idx]>v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }

}

int main()
{
    vector<int> v = insert_heap();
    delete_heap(v);
    print_heap(v);
    
    return 0;
}