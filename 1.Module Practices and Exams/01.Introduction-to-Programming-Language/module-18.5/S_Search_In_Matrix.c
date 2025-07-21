#include <stdio.h>

int main()
{   
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int x, flag=1;
    scanf("%d", &x);

    for(int i=0; i<n && flag==1; i++)
    {
        for(int j=0; j<m && flag==1; j++){
            if(arr[i][j] == x){
                printf("will not take number");
                flag = 0;
            }
        }
    }

    if(flag==1)
    {
        printf("will take number");
    }
    return 0;
}