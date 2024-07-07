#include <stdio.h>

int main()
{   
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    int arr[rows][columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int count_not_zero=0;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            if(arr[i][j] != 0)
            {
                count_not_zero++;
            }
        }
    }

    if (count_not_zero == 0)
    {
        printf("This Matrix is a zero matix.");
    }
    else
    {
        printf("This Matrix is not a zero matix.");
    }
    
    return 0;
}