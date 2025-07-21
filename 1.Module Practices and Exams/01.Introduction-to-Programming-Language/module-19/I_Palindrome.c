#include <stdio.h>
#include <string.h>

int main()
{   
    char str[1001];
    scanf("%s", str);
    int flag = 1, i=0, len;
    len = strlen(str)-1;
    while (i<len)
    {
        if(str[i]!=str[len])
        {
            flag = 0;
        }
        i++;
        len--;
    }
    
    if(flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}