#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    unordered_map<int, int> last;
    int ans = 0, l = 0;
    for (int r = 0; r < n; ++r) 
    {
        if (last.count(a[r])) l = max(l, last[a[r]] + 1);
        last[a[r]] = r;
        ans = max(ans, r - l + 1);
    }
    cout << ans << '\n';
}
