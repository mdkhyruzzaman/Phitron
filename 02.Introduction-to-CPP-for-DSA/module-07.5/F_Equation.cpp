#include <bits/stdc++.h>
using namespace std;
long long sumF(long long int x, long long int i, long long int n)
{
    if(i>n) return 0;
    return pow((x*1.00),(i*1.00))+sumF(x, i+2, n);
}
int main()
{   
    long long int x, n;
    cin>>x>>n;
    if(n>=2){
        cout<<sumF(x, 2, n);
    }
    else
    {
        cout<<0;
    }
    return 0;
}