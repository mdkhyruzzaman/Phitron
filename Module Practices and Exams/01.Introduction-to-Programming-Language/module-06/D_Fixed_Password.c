#include <stdio.h>

int main()
{   
    int x;
    while (scanf("%d", &x) != EOF)
    {
        if(x==1999)
        {   
            printf("Correct");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    
    return 0;
}