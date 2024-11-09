#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }

        priority_queue<int> even;
        priority_queue<int> odd;

        for (auto [key, val] : mp)
        {
            if (val % 2 == 0)
                even.push(val);
            else
                odd.push(val);
        }

        int remChar = n - k;
        bool isPalindrome = false;

        while (!isPalindrome)
        {
            if (!even.empty())
            {
                int top = even.top();
                even.pop();
                if (top <= remChar)
                    remChar -= top;
                else
                    remChar -= remChar;

                if (remChar == 0)
                    isPalindrome = true;
            }
            else if (!odd.empty())
            {
                int top = odd.top();
                odd.pop();
                if (remChar - top == 0)
                    remChar -= top;
                else if (top < remChar)
                    remChar -= (top - 1);
                else
                    remChar -= remChar;

                if (remChar == 0)
                    isPalindrome = true;
            }
            else
            {
                break;
            }
        }

        if (isPalindrome)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}