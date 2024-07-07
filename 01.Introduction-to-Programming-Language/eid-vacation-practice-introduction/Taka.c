#include <stdio.h>

int main()
{   
    int x, y, rina, mina;
    scanf("%d %d", &x, &y);
    mina = (x-y)/2+y;
    rina = (x-y)/2;
    printf("%d %d", mina, rina);
    return 0;
}