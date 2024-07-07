#include <stdio.h>

int printMax(int arr[], int n, int i)
{
    if(n-1 == i)
    {
        return arr[i];
    }

    int max = printMax(arr, n, i+1);
    if(max>arr[i])
    {
        return max;
    }
    else
    {
        return arr[i];
    }
}

int main()
{   
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m = printMax(arr, n, 0);
    printf("%d", m);
    return 0;
}