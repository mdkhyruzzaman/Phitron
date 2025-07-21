#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char S[10001];
    scanf("%s", S);
    int countAlpha[26] = {0};
    for(int i=0; i<=strlen(S); i++)
    {
        int ch = S[i]-97;
        countAlpha[ch]++;
    }

    for(int i=0; i<=26; i++)
    {
        if(countAlpha[i]!=0)
        {
            printf("%c - %d\n", i+97, countAlpha[i]);
        }
    }
    return 0;
}