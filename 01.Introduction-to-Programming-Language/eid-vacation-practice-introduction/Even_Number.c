#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);
    int mid = n/5;
    for(int i = -4; i<=4; i+=2)
    {
        printf("%d ", mid+i);
    }
    return 0;
}