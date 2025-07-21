#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int countTwo=0, countThree=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            countTwo++;
        }
        else if(arr[i]%3==0)
        {
            countThree++;
        }
    }

    printf("%d %d", countTwo, countThree);
    return 0;
}