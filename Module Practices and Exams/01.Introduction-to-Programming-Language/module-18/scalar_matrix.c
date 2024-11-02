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

    int flag=1;
    if(rows!=columns){
        flag = 0;
    }

    for(int i=0; i<rows && flag==1; i++)
    {
        for(int j=0; j<columns && flag==1; j++)
        {
            if(i==j)
            {
                if(arr[i][j] != arr[0][0])
                {
                    flag = 0;
                }
                continue;
            }
            if(arr[i][j] != 0)
            {
                flag=0;
            }
        }
    }

    if (flag == 1)
    {
        printf("Scalar Matrix.");
    }
    else
    {
        printf("Not Scalar Matrix.");
    }
    
    return 0;
}