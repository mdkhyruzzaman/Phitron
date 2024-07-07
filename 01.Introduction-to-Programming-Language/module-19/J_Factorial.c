#include <stdio.h>

long long int factorial(int n, int i)
{
    if(n==i)
    {
        return n;
    }
    return factorial(n, i+1)*i;
}

int main()
{   
    int n;
    scanf("%d", &n);
    long long int f = factorial(n, 1);
    printf("%lld", f);
    return 0;
}