#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int tig=0, pan=0;
        scanf("%d", &n);
        char s[n];
        scanf("%s ", s);
        for(int j=0; j<n; j++)
        {
            if(s[j]=='T')
            {
                tig+=1;
            }
            else
            {
                pan+=1;
            }
        }

        if(tig>pan)
        {
            printf("Tiger\n");
        }
        else if(pan>tig)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}