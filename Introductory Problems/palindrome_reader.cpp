#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    map<char, int> freq;
    for (char c : s) freq[c]++;
    int odd_count = 0;
    char odd_char = 0;
    for (auto [ch, cnt] : freq) 
    {
        if (cnt % 2) 
        {
            odd_count++;
            odd_char = ch;
        }
    }
    if (odd_count > 1) 
    {
        cout << "NO SOLUTION\n";
        return 0;
    }
    string left = "", middle = "";
    for (auto [ch, cnt] : freq) 
    {
        string part(cnt / 2, ch);
        left += part;
    }
    if (odd_count) middle = string(freq[odd_char], odd_char);
    string right = left;
    reverse(right.begin(), right.end());
    cout << left + middle + right << '\n';
}
