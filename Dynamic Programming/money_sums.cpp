#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> coins(n);
    int max_valid = 0;
    for (int &x : coins) 
    {
        cin >> x;
        max_valid += x;
    }
    vector<bool> dp(max_valid + 1, false);
    dp[0] = true;
    for (int coin : coins) 
    {
        for (int s = max_valid; s >= coin; --s) 
        {
            if (dp[s - coin])
                dp[s] = true;
        }
    }
    vector<int> results;
    for (int s = 1; s <= max_valid; ++s) 
    {
        if (dp[s]) results.push_back(s);
    }
    cout << results.size() << '\n';
    for (int x : results) cout << x << ' ';
    cout << '\n';
}
