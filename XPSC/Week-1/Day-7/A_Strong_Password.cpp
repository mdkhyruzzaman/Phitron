#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        string password;
        cin>>password;
        string newPass;
        newPass = password[0];
        char lastChar = password[0];
        bool isAdd = false;

        for(int i = 1; i<password.length(); i++)
        {
            if(!isAdd && lastChar == password[i])
            {
                if(lastChar == 'a') newPass.push_back('b');
                else newPass.push_back('a');
                newPass.push_back(lastChar);
                isAdd = true;
            }
            else
            {
                newPass.push_back(password[i]);
                lastChar = password[i];
            }
        }

        if(!isAdd){
            if(lastChar == 'a') newPass.push_back('b');
            else newPass.push_back('a'); 
        }

        cout<<newPass<<endl;
    }
    return 0;
}