#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
int main() 
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
        cin >> p[i];
    ll best = INF;
    for (int mask = 0; mask < (1 << n); ++mask) 
    {
        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; ++i) 
        {
            if (mask & (1 << i))
                sum1 += p[i];  
            else
                sum2 += p[i];  
        }
        best = min(best, abs(sum1 - sum2));
    }
    cout << best << '\n';
    return 0;
}
