#include <stdio.h>

int main()
{   
    int x, p;
    scanf("%d %d", &x, &p);
    float ap = 100.00*p/(100-x);
    printf("%.2f", ap);
    return 0;
}