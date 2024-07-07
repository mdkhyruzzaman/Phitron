#include <stdio.h>

int main()
{   
    char ch;
    int result;
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
    {   
        result = ch+32;
    }
    else{
        result = ch-32;
    }

    printf("%c", result);
    return 0;
}