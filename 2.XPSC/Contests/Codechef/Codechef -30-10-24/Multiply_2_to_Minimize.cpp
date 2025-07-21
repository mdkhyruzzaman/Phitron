 #include <bits/stdc++.h>
 using namespace std;

 int minimize(vector<int> v)
 {
    for(int i = 0; i<v.size()-1; i++)
    {
        for(int j = i; j<v.size(); j++)
        {
            
        }
    }
 }
 
 int main() {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }

        vector<int> sv;
        for(int i=0; i<n; i++)
        {
            sv.push_back(v[i]);
            
        }
     }
     return 0;
 }