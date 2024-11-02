#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t = 0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }

        if(n%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int even=0, odd=0;
            for(int j=0; j<n; j++)
            {
                if(arr[j]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

            if(even>odd)
            {
                cout<<(even-odd)/2<<endl;
            }
            else if(odd>even)
            {
                cout<<(odd-even)/2<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    
    }
    return 0;
}