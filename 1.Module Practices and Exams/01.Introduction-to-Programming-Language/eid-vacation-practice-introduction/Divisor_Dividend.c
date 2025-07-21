#include <stdio.h>

int main()
{   
    int dd, q, r, ds;
    scanf("%d %d %d", &dd, &q, &r);
    ds = (dd-r)/q;
    printf("%d",ds);
    return 0;
}