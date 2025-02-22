#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while(T--){
        int N; 
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++){
            cin >> A[i];
        }
        
        if(N == 1){
            cout << -1 << "\n";
            continue;
        }
        
        unordered_map<int,int> freq;
        for(auto &num : A){
            freq[num]++;
        }
        
        int candidate = -1;
        for(auto &p : freq){
            if(p.second >= 2){
                candidate = p.first;
                break;
            }
        }
        
        if(candidate == -1){
            cout << -1 << "\n";
        } 
        else {
            cout << 1 << "\n" << candidate << "\n";
        }
    }
    return 0;
}