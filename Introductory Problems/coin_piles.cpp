#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t; cin >> t;
    while (t--) 
    {
        long long a, b;
        cin >> a >> b;
        cout << (((a + b) % 3 == 0 && 2*min(a, b) >= max(a, b)) ? "YES\n" : "NO\n");
    }
}
