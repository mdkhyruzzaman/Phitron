#include <stdio.h>

int main()
{   
    int n, even=0, odd=0, neg=0, pos=0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        int v;
        scanf("%d", &v);
        if(v%2==0){
            even++;
        }
        else{
            odd++;
        }

        if(v>0){
            pos++;
        }
        else if (v<0)
        {
            neg++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    return 0;
}