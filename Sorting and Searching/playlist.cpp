#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, x; cin >> n;
    map<int, int> last;
    int ans = 0, l = 0;
    for (int r = 0; r < n; ++r)
    {
        cin >> x;
        if (last.count(x) && last[x] >= l)
            l = last[x] + 1;
        last[x] = r;
        ans = max(ans, r - l + 1);
    }
    cout << ans << '\n';
}
