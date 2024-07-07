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
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int lessDays = d-((m1*d)/(m1+m2));
        printf("%d\n", lessDays);
    }
    return 0;
}