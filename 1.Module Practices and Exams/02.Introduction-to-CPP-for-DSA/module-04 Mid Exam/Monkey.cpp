#include <bits/stdc++.h>

using namespace std;



int main()
{
    char str[100001];
    while (cin.getline(str, 100001))
    {
        int lenth = strlen(str);
        sort(str, str+lenth);
        for(int i=0; i<lenth; i++)
        {
            if(str[i]!=' ')
            {
                cout<<str[i];
            }
        }
        cout<<endl;

    }
    
    return 0;
}
