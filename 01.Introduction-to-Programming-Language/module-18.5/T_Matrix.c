#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int primary_diagonal = 0, secondary_diagonal = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++){
            if(i==j){
                primary_diagonal+=arr[i][j];
            }

            if(j+1 == n-i)
            {
                secondary_diagonal+=arr[i][j];
            }
        }
    }

    if(primary_diagonal>=secondary_diagonal)
    {
        printf("%d", primary_diagonal-secondary_diagonal);
    }
    else
    {
        printf("%d", secondary_diagonal-primary_diagonal);
    }
    return 0;
}