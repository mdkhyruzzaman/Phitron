#include <stdio.h>

int lenString(char str[], int i){
    if(str[i] == '\0') return 0;
    int l = lenString(str, i+1);
    return l+1;
}

int len(char str[])
{
    return lenString(str, 0);
}

int main()
{   
    char str[] = "hello";
    int length = len(str);
    printf("%d", length);
    return 0;
}