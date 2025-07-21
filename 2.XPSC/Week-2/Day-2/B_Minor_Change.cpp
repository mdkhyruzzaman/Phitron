#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, t;
    cin>>s>>t;
    int ct = 0;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] != t[i]) ct++;
    }
    cout<<ct;
    return 0;
}