#include <stdio.h>

int main()
{   
    char x;
    scanf("%c", &x);
    if(x>=65 && x<=90)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if(x>=97 && x<=122)
    {
        printf("ALPHA\nIS SMALL");
    }
    else{
        printf("IS DIGIT");
    }
    return 0;
}