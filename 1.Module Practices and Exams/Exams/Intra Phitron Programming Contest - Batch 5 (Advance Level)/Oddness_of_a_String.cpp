#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int oddNess(string str, int l, int r)
{
    int arrLen = r-l+1;
    if(arrLen == 1){
        return 1;
    }
    char arr[arrLen];
    for(int i=0; i<arrLen; i++)
    {
        arr[i] = str[l-1+i];
    }

    for(int i = 0; i<arrLen-1; i++)
    {
        for(int j=i+1; j<arrLen; j++)
        {
            if(arr[i]>arr[j])
            {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    char CurrChar = arr[0];
    int charCount = 1;
    int oddness = 0;
    for(int i=1; i<arrLen; i++)
    {
        if(CurrChar == arr[i])
        {
            charCount+=1;
        }
        else{
            if(charCount%2==1){
                oddness+=1;
            }
            
            CurrChar = arr[i];
            charCount = 1;
        }

        if(i==arrLen-1 && charCount%2==1)
        {
            oddness+=1;
        }
    }

    return oddness;
}

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, q;
        string str;
        cin>>n>>q;
        cin>>str;
        for(int j=0; j<q; j++)
        {
            int l, r;
            cin>>l>>r;
            int oddness = oddNess(str, l, r);
            cout<<oddness<<endl;
        }

    }
    return 0;
}
