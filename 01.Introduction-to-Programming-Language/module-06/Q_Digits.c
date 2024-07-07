#include <stdio.h>

int main()
{   
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        do
        {
            int r=0;
            r=n%10;
            n/=10;

            printf("%d ", r);
        }while (n>0);
        printf("\n");
    }
    return 0;
}