#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);
    int sp=n-1, st=1;
    for(int i=0; i<(n*2)-1; i++)
    {
        //this loop for print space
        for(int j=sp; j>0; j--)
        {
            printf(" ");
        }

        // this loop for print *
        for(int j=0; j<st; j++)
        {
            printf("*");
        }
        
        if(i<n-1)
        {
            sp--;
            st+=2;
        }
        else
        {
            sp++;
            st-=2;
        }

        printf("\n");
    }
    return 0;
}