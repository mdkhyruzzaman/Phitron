#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int **c = &p;
    cout<<*(*c);
}