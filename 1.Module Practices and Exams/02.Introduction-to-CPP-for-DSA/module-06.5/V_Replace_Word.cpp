// Wrong
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    string rw = "EGYPT";
    int fIndex = 0, size = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == rw[size]) //check string char and rw char
        {
            if(size == 0) // set first point of rw from string
            {
                fIndex = i;
            }

            size++; // increatement rw index

            if(size == rw.size()) // Replace rw to space when match word;
            {
                s.replace(fIndex, size, " ");
                size = 0;
                i = fIndex;
            }
        }
        else
        {
            size = 0;
        }
    }
    cout<<s;
    return 0;
}