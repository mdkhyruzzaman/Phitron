#include <stdio.h>

void printRec(int arr[], int n, int i)
{
    if(i%2 == 0)
    {
        printf("%d",arr[i]);
        if(i>0)
        {
            printf(" ");
        }
    }
    if(i==0) return;
    printRec(arr, n, i-1);
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
    printRec(arr, n, n-1);
    return 0;
}