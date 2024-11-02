#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int x, y, t;
   cin>>x>>y>>t;

   if((t%x==0) || (t%y==0) || ((t%x)%y==0) || ((t%y)%x==0))
   {
    cout<<"YES";
   }
   else
   {
    int xi = 1;
    int flag = 0;
    while (((x*xi)+y)<=t && flag==0)
    {
        if((t-(x*xi))%y == 0)
        {
            flag = 1;
        }
        else{
            xi++;
        }
    }
    
    if(flag == 0)
    {
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }
   }
   return 0;
}