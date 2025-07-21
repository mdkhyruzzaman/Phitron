#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int *arr, int size)
{
    int count = 0;
    for(int i=0; i<size; i++)
    {
        if(*(arr+i)==1){
            break;
        }
        count++;
    }
    return count;
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

    printf("%d",count_before_one(arr, n));
    return 0;
}