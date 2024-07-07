#include <stdio.h>

int main()
{   
    char a[6] = {'S', 'a', 'g', 'o', 'r', };
    // char a[5] = "Sagor";
    // for(int i=0; i<5; i++)
    // {
    //     printf("%c\n", a[i]);
    // }
    int sz = sizeof(a)/sizeof(char);
    printf("%d\n", sz);
    printf("%s", a);
    return 0;
}