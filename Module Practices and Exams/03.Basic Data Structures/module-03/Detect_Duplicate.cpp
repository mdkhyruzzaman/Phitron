#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;
    
    bool flg = false;
    int l=0, r=n-1;
    while(l<=r){
        int mid = (r+l)/2;
        if(arr[mid] == x)
        {
            if(arr[mid-1] == x || arr[mid+1] == x)
            {
                flg = true;
                break;
            }
        }

        if(x>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(flg) cout<<"true";
    else cout<<"false";
    return 0;
}