#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        char S[10001];
        scanf("%s", S);
        int upperCase = 0, lowerCase = 0, digit = 0;
        for(int i=0; i<strlen(S); i++)
        {
            if(S[i]>='A' && S[i]<='Z')
            {
                upperCase++;
            }
            else if(S[i]>='a' && S[i]<='z')
            {
                lowerCase++;
            }
            else
            {
                digit++;
            }
        }

        printf("%d %d %d\n", upperCase, lowerCase, digit);
    }
    return 0;
}