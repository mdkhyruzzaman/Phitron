#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string chef, chefina;
        cin>>chef>>chefina;
        int chefWin = 0, chefinaWin = 0;
        for(int i = 0; i<n; i++)
        {
            char cf = chef[i], cfi = chefina[i];
            if(cf == cfi) continue;
            if((cf == 'R' && cfi == 'S') || (cf == 'S' && cfi == 'P') || (cf == 'P' && cfi == 'R')) chefWin++;
            else chefinaWin++;
        }

        int def = 0;
        while(chefinaWin>=chefWin){
            def++;
            chefinaWin--;
            chefWin++;
        }

        cout<<def<<endl;
    }
    return 0;
}