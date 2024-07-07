#include <stdio.h>

int main()
{   
    int n, maxNum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int v;
        scanf("%d", &v);
        if(v>maxNum){
            maxNum=v;
        }
    }

    printf("%d", maxNum);
    return 0;
}