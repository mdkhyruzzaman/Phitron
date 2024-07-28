// 3rd Problem
/*
Problem Statement

You are given a doubly linked list of unique string values. These strings refer to web addresses without any spaces. You will be given Q queries. In each query you will be given some commands. Type of commands are -

visit address - You need to go to that address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
next - You need to go to the next address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
prev - You need to go to the previous address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
One more thing, if the address isn't available make sure you don't move from your current position. You are at the head initially.

Note: You can use Singly/Doubly Linked List or STL List to solve this problem.

Input Format

First line will contain the values of the doubly linked list, and will terminate with the string "end".
Second line will contain Q.
Next Q lines will contain the commands. It is guranteed that you will get "visit address" command at first which will contain a valid address. It will not contain valid address everytime!
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
1 <= Q <= 1000;
1 <= |Address| <= 100; Here |Address| is the length of the string address.
Output Format

For each query output as asked.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    list<string> address;
    string inputString;
    getline(cin, inputString);
    stringstream ss(inputString);
    string word;
    while(ss>>word)
    {
        if(word == "end") break;
        address.push_back(word);
    }

    int n;
    cin>>n;
    getchar();
    auto itVal = address.begin();
    while(n--) 
    {
        string command;
        getline(cin, command);
        stringstream commandstream(command);
        string commandWord;
        commandstream>>commandWord;
        if(commandWord == "visit") {
            commandstream>>commandWord;
            auto currentIt = find(address.begin(), address.end(), commandWord);

            if(currentIt != address.end())
            {
                cout<<*currentIt<<endl;
                itVal = currentIt;
            }
            else 
            {
                cout<<"Not Available"<<endl;
            }
        } 
        else if (commandWord == "prev")
        {
            auto currentIt = next(itVal,-1);
            if(currentIt != address.end())
            {
                cout<<*currentIt<<endl;
                itVal = currentIt;
            }
            else 
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if (commandWord == "next")
        {
            auto currentIt = next(itVal, 1);
            if(currentIt != address.end())
            {
                cout<<*currentIt<<endl;
                itVal = currentIt;
            }
            else 
            {
                cout<<"Not Available"<<endl;
            }
        }
        
    }

    return 0;
}