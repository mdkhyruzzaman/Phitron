#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char str[])
{
    int size = strlen(str);
    for(int i=0; i<size/2; i++){
        if(str[i] != str[size-1-i])
        {
            return 0;
        }
    }

    return 1;
}

int main() 
{
    char str[1001];
    scanf("%s", str);
    if(is_palindrome(str)){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}