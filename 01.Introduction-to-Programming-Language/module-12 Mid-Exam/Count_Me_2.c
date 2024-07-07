#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char S[100001];
    scanf("%s", S);
    int consonantsChar = 0;
    for(int i=0; i<strlen(S); i++)
    {
        // printf("%d", S[i]);
        if((S[i]=='a') || (S[i]=='e') || (S[i]=='i') || (S[i]=='o') || (S[i]=='u'))
        {
            continue;
        }
        else
        {
            consonantsChar++;
        }
    }

    printf("%d", consonantsChar);
    return 0;
}