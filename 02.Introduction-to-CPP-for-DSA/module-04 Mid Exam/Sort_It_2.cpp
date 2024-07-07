#include <bits/stdc++.h>
using namespace std;

int * sort_it(int N)
{
    int * A = new int[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    sort(A, A+N, greater<int>());
    return A;
}

int main()
{   
    int n;
    cin>>n;

    int * ar = sort_it(n); 
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }

    delete[] ar;

    return 0;
}