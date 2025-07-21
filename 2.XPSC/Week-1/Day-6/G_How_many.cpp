#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s, t;
    cin>>s>>t;
    int a = 0, b = 0, c = 0;
    int ct = 0;
    while(a+b+c<=s && a*b*c<=t)
    {
        ct++;
        c++;
        if(a+b+c>s || a*b*c>t)
        {
            c = 0;
            b++;
            if(a+b+c>s || a*b*c>t)
            {
                b = 0;
                a++;
            }
        }
    }

    cout<<ct;
    return 0;
}