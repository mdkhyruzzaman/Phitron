#include <stdio.h>

int countVowel(char str[], int i)
{
    if(str[i]=='\0') return 0;
    int cv = countVowel(str, i+1);
    if(str[i]>='A' && str[i] <= 'Z')
    {
        str[i] = str[i]+32;
    }
    
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
        return cv+1;
    }
    return cv;

}

int main()
{   
    char str[201];
    fgets(str, 201, stdin);
    int cv = countVowel(str, 0);
    printf("%d", cv);
    return 0;
}