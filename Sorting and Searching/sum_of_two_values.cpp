#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, x;
    cin >> n >> x;
    unordered_map<int, int> pair;
    for (int i = 1; i <= n; ++i) 
    {
        int val;
        cin >> val;
        int need = x - val;
        if (pair.count(need)) 
        {
            cout << pair[need] << ' ' << i << '\n';
            return 0;
        }
        pair[val] = i;
    }
    cout << "IMPOSSIBLE\n";
}


