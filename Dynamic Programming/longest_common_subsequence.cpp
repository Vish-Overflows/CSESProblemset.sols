#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; ++i)
      {
        for (int j = 1; j <= m; ++j)
          {
       dp[i][j] = (a[i - 1] == b[j - 1]) ? dp[i - 1][j - 1] + 1: max(dp[i - 1][j], dp[i][j - 1]);
          }
      }
    cout << dp[n][m] << '\n';
    vector<int> lcs;
    int i = n, j = m;
    while (i > 0 && j > 0) 
    {
        if (a[i - 1] == b[j - 1]) 
        {
            lcs.push_back(a[i - 1]);
            --i, --j;
        } 
        else if (dp[i - 1][j] >= dp[i][j - 1]) 
        {
            --i;
        }   
        else 
        {
            --j;
        }
    }
    reverse(lcs.begin(), lcs.end());
    for (int x : lcs) cout << x << ' ';
    cout << '\n';
    return 0;
}
