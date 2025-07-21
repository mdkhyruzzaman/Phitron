#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++) cin>>arr[i];

    int Sereja = 0, Dima = 0;

    int leftMost = 0, rightMost = n-1;
    bool SerejaTurn = true;
    while(leftMost<rightMost+1)
    {
        int takenVal;
        if(arr[leftMost]>arr[rightMost])
        {
            takenVal = arr[leftMost];
            leftMost++;
        }
        else
        {
            takenVal = arr[rightMost];
            rightMost--;
        }

        if(SerejaTurn)
        {
            Sereja += takenVal;
            SerejaTurn = false;
        }
        else
        {
            Dima += takenVal;
            SerejaTurn = true;
        }
    }

    cout<<Sereja<<" "<<Dima;
    return 0;
}