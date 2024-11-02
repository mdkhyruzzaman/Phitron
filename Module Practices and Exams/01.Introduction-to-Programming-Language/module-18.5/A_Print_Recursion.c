#include <stdio.h>

void printRec(int n, int i)
{
    if(i==n) return;
    printf("I love Recursion\n");
    printRec(n, i+1);
}

int main()
{   
    int n;
    scanf("%d", &n);
    printRec(n,0);
    return 0;
}