#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() 
{
    int q; cin >> q;
    while (q--) 
    {
        ll k; cin >> k;
        ll len = 1, cnt = 9, base = 1;
        while (k > len * cnt) k -= len * cnt, len++, cnt *= 10, base *= 10;
        base+=(k - 1) / len;
        cout << to_string(base)[(k - 1) % len] << '\n';
    }
}
