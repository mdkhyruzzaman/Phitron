#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int t, n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        int max_run = 0;
        for(int j=0; j<n; j++)
        {
            if(max_run<a[j])
            {
                max_run = a[j];
            }
        }

        cout<<max_run<<endl;
    }
    return 0;
}