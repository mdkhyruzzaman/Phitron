#include <stdio.h>

int main()
{   
    int totalAge, daughterAge, fatherAge;
    scanf("%d", &totalAge);
    daughterAge = totalAge/5;
    fatherAge = daughterAge*4;
    printf("%d %d", fatherAge, daughterAge);
    return 0;
}