#include <stdio.h>

int main()
{   
    int x, step=0;
    scanf("%d", &x);
    while (x>0)
    {
        if(x/3!=0)
        {
            step+=x/3;
            x%=3;
        }
        else if (x/2!=0)
        {
            step+=x/2;
            x%=2;
        }
        else
        {
            step+=x;
            x%=1;
        } 
    }
    printf("%d", step);
    return 0;
}