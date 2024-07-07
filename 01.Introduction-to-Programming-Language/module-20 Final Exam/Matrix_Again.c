#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int m, n;
    scanf("%d %d", &m, &n);
    int mtx[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",mtx[m-1][i]);
    }
    printf("\n");
    for(int i=0; i<m; i++)
    {
        printf("%d ",mtx[i][n-1]);
    }    
    return 0;
}