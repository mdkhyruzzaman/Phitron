#include <stdio.h>

void printRec(int n, int i)
{
    if(i==0) return;
    printf("%d",i);
    if(i>1)
    {
        printf(" ");
    }
    printRec(n, i-1);
}

int main()
{   
    int n;
    scanf("%d", &n);
    printRec(n,n);
    return 0;
}