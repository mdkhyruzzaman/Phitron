#include <stdio.h>

void print(int n)
{
    if(n == 0) return;
    print(n/10);
    printf("%d ", n%10);
}

int main()
{   
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        print(n);
        if(n==0) 
        {
            printf("%d ", 0);
        }
        printf("\n");
    }
    return 0;
}