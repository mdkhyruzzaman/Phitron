#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);
    int mid = (n/4)-3;
    for(int i = 0; i<=6; i+=2)
    {
        printf("%d ", mid+i);
    }
    return 0;
}