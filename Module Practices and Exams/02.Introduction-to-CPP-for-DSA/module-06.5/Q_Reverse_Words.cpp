#include <bits/stdc++.h>
using namespace std;
void rw(stringstream & ss)
{
    
}
int main()
{   
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int flg = 0;
    while(ss>>word)
    {   
        if(flg == 1){
            cout<<" ";
        }
        for(int i=word.size()-1; i>=0; i--)
        {
            cout<<word[i];
        }
        flg = 1;
    }
    return 0;
}