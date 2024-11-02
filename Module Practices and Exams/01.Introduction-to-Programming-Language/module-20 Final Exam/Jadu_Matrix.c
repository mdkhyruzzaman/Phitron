#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int m, n;
    scanf("%d %d", &m, &n);
    int jm[m][n];
    int flag = 1;

    if(m!=n)
    {
        flag = 0;
    }

    for(int i=0; i<m && flag==1; i++)
    {
        for(int j=0; j<n && flag==1; j++)
        {
            scanf("%d", &jm[i][j]);
        }
    }

    for(int i=0; i<m && flag==1; i++)
    {
        for(int j=0; j<n && flag==1; j++)
        {
            if((i==j && jm[i][j]==1) || (j==(n-i-1) && jm[i][j]==1) ||(i!=j && j!=(n-i-1) && jm[i][j]==0))
            {
                continue;
            }
            else{
                flag = 0;
            }
        }
    }

    if(flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}