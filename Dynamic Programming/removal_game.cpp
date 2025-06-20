#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long total = 0;
    for (auto &x : a) {
        cin >> x;
        total += x;
    }
    vector<vector<long long>> dp(n, vector<long long>(n));
    for (int len = 1; len <= n; ++len) 
    {
        for (int i = 0; i + len - 1 < n; ++i) 
        {
            int j = i + len - 1;
            if (i == j) dp[i][j] = a[i];
            else dp[i][j] = max(a[i] - dp[i + 1][j], a[j] - dp[i][j - 1]);
        }
    }
    cout << (total + dp[0][n - 1]) / 2 << '\n';
}
