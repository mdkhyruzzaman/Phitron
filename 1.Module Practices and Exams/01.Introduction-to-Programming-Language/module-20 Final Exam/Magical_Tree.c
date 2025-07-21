#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, max_rpt;
    scanf("%d", &n);
    max_rpt = (5+((n+1)/2));
    int star = 1;
    for(int i=1; i<=max_rpt; i++)
    {
        for(int j=0; j<max_rpt-i; j++)
        {
            printf(" ");
        }

        for(int j=0; j<star; j++)
        {
            printf("*");
        }
        star+=2;
        printf("\n");
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf(" ");
        }
        
        for(int j=0; j<n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}