#include <stdio.h>

int main()
{   
    char a[6];
    scanf("%s", &a);
    int s = sizeof(a)/sizeof(char);
    printf("%s\n", a);
    return 0;
}