#include <bits/stdc++.h>
using namespace std;
int main()
{   
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};
    // myList.remove(10);
    myList.sort(); //asending
    myList.sort(greater<int>()); //desceding
    myList.unique();
    myList.reverse();
    for(int val:myList)
    {
        cout<<val<<endl;
    }
    return 0;
}