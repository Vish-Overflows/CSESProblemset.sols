#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
const int MOD = 1e9 + 7;
int main() 
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int& c : coins) cin >> c;
    vector<int> dp(x + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= x; ++i)
        for (int c : coins)
            if (i - c >= 0)
                dp[i] = min(dp[i], dp[i - c] + 1);
    cout << (dp[x] == INF ? -1 : dp[x]) << '\n';
}
