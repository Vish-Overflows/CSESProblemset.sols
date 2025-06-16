#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() 
{
    int n;
    cin >> n;
    long long result = 1, a = 2;
    while (n) 
    {
        if (n & 1) result = result * a % MOD;
        a = a * a % MOD;
        n >>= 1;
    }
    cout << result << '\n';
}
