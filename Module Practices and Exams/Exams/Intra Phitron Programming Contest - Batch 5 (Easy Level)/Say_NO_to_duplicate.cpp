#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }

        for(int j=0; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(a[j]>a[k])
                {
                    int temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
        cout<<a[0]<<" ";
        int pv = a[0];
        for(int j=1; j<n; j++)
        {
            if(pv!=a[j])
            {
                pv = a[j];
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
