#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int x;
        scanf("%d", &x);
        for(int i=0; i<n; i++)
        {
            if(arr[i]==x){
                printf("YES");
                break;
            }
            else if (i+1==n)
            {
                printf("NO");
            }
            
        }
        printf("\n");
    }
    return 0;
}