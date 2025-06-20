#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int modinv(int a, int m) 
{
    int res = 1, b = m - 2;
    while (b) {
        if (b & 1) res = 1LL * res * a % m;
        a = 1LL * a * a % m;
        b >>= 1;
    }
    return res;
}
int main() 
{
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if (sum % 2) 
    {
        cout << 0 << '\n';
        return 0;
    }
    int target = sum / 2;
    vector<int> dp(target + 1);
    dp[0] = 1;
    for (int num = 1; num <= n; ++num)
        for (int s = target; s >= num; --s)
            dp[s] = (dp[s] + dp[s - num]) % MOD;
    cout << 1LL * dp[target] * modinv(2, MOD) % MOD << '\n';
}
