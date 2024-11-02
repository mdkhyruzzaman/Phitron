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
        vector<int> notes;
        for(int i = 0; i<n; i++)
        {
            int note;
            cin>>note;
            notes.push_back(note);
        }

        bool isPerfect = true;
        int noteA = notes[0];
        for(int i = 1; i<n; i++)
        {
            int noteB = notes[i];
            if(abs(noteA-noteB) == 5 || abs(noteA-noteB) == 7)
            {
                noteA = noteB;
            }
            else
            {  
                isPerfect = false;
                break;
            }
        }

        if(isPerfect) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}