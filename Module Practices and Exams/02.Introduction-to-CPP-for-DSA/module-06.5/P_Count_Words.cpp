#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string str;
    getline(cin, str);
    bool inside_word = false;
    int count = 0;
    for(char c:str)
    {
        if(isalpha(c))
        {
            if(inside_word==false) count++;
            inside_word = true;
        }
        else{
            inside_word=false;
        }
    }
    cout<<count;
    return 0;
}