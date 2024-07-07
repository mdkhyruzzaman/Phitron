#include <stdio.h>

int main()
{   
    char ch;
    scanf("%c", &ch);
    if(ch=='z')
    {
        printf("%c", 'a');
    }
    else{
        int next = ch+1;
        printf("%c", next);
    }
    return 0;
}