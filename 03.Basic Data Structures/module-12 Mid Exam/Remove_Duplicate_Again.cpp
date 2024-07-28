// 1st Problem
/*
Problem Statement

You will be given a linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list in ascending order.

Note: You need to solve this using STL List, otherwise you will not get marks.

Input Format

First line will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output the final linked list where there will be no duplicate values.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    list<int> numbers;
    while (true)
    {
        int n;
        cin>>n;
        if(n==-1)
        {
            break;    
        }
        numbers.push_back(n);
    }

    numbers.sort();
    numbers.unique();

    for(int num:numbers) {
        cout<<num<<" ";
    }
    
    return 0;
}