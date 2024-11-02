#include <stdio.h>

int main()
{   
    int n, v, posSum=0, negSum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d ", &v);
        if(v>0){
            posSum += v;
        }
        else
        {
            negSum += v;
        }
    }
    printf("%d %d", posSum, negSum);
    return 0;
}