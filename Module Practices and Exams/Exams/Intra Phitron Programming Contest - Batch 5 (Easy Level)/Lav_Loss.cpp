#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    double x, y, z;
    cin>>x>>y>>z;
    double actual_price, sell_with_profit;
    actual_price = (100.00*x)/(100-y);
    sell_with_profit = ((100+z)*actual_price)/100.00;
    cout<<fixed<<setprecision(2)<<sell_with_profit;
    return 0;
}
