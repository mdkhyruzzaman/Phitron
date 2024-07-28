#include <bits/stdc++.h>
using namespace std;
int main()
{   
    list<int> myList = {10, 20, 30};
    vector<int> myList2 = {100, 200, 300};
    // list<int> newList;
    // newList = myList;
    // for(int val:newList)
    // {
    //     cout<<val<<endl;
    // }

    // myList.push_back(100);
    // myList.push_front(200);
    // myList.pop_front();
    // myList.pop_back();
    myList.insert(next(myList.begin(),2), {100, 200, 300});
    for(int val : myList)
    {
        cout<<val<<endl;
    }
    return 0;
}