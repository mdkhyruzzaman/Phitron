#include <stdio.h>

int main()
{   
    int n, min, fre=1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];

    for(int i=1; i<n; i++)
    {
        if(min==arr[i])
        {
            fre+=1;
        }
        else if(min>arr[i])
        {
            min = arr[i];
            fre = 1;
        }
    }

    if(fre%2!=0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}