#include <iostream>
#include <algorithm>//এই লাইনটি min এবং max ফাংশন সহ অন্যান্য অ্যালগোরিদম ফাংশন সরবরাহ করে।
using namespace std;

int main() {
  int a, b, c, d, mn, mx;
  cin >> a >> b >> c >> d;

  // পদ্ধতি ১: পৃথকভাবে min ও max খুঁজে বের করা 
  mn = min(a, b);  // a ও b এর মধ্যে ক্ষুদ্রতম মান খুঁজে 'c' ভেরিয়েবলে রাখুন
  mx = max(a, b);  // a ও b এর মধ্যে সর্বোচ্চ মান খুঁজে 'd' ভেরিয়েবলে রাখুন

  cout << c << " " << d << endl;

  // পদ্ধতি ২:সবগুলি মানের মধ্যে min ও max খুঁজে বের করা 
  mn = min({a, b, c, d});  // {a, b, c, d} এর মধ্যে ক্ষুদ্রতম মান খুঁজে 'mn' ভেরিয়েবলে রাখুন
  mx = max({a, b, c, d});  // {a, b, c, d} এর মধ্যে সর্বোচ্চ মান খুঁজে 'mx' ভেরিয়েবলে রাখুন

  cout << mn << " " << mx << endl;

  return 0;
}