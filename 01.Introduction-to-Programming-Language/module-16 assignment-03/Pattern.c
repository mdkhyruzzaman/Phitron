#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int space = n-1;
    int pe = 1;
    for(int i=0; i<(n*2-1);i++)
    {
        char p;
        if(i%2==0){
            p = '#';
        }else{
            p = '-';
        }
        for(int j=0;j<space; j++){
            printf(" ");
        }

        for(int j=0; j<pe; j++)
        {
            printf("%c", p);
        }
        printf("\n");
        if(i<n-1){
            pe+=2;
            space--;
        }else{
            pe-=2;
            space++;
        }
    }
    return 0;
}