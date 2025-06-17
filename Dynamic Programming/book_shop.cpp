#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, x;
    cin >> n >> x;
    vector<int> price(n), pages(n);
    for (int &p : price) cin >> p;
    for (int &s : pages) cin >> s;
    vector<int> dp(x + 1, 0);
    for (int i = 0; i < n; ++i)
      {
       for (int j = x; j >= price[i]; --j)
            dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
      }
    cout << dp[x] << '\n';
}
