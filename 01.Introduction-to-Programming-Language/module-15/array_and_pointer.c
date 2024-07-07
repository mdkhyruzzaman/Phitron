#include <stdio.h>

int main()
{   
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Oth index %p\n", arr);
    printf("Oth index %d\n", arr[0]);
    printf("Oth index %d\n", *(arr+1));
    printf("Oth index %p\n", &arr[0]);
    // printf("Oth index %p\n", &(arr+1));
    printf("Oth index %p\n", &arr[1]);
    return 0;
}