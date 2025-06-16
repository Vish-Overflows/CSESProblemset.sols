#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, m;
    cin >> n >> m;
    map<int, int> freq;
    for (int i = 0, x; i < n; ++i) 
    {
        cin >> x;
        freq[x]++;
    }
    for (int i = 0, x; i < m; ++i) 
    {
        cin >> x;
        auto it = freq.upper_bound(x);
        if (it == freq.begin()) 
        {
            cout << -1 << '\n';
        }
        else 
        {
            --it;
            cout << it->first << '\n';
            if (--it->second == 0) freq.erase(it);
        }
    }
  }
