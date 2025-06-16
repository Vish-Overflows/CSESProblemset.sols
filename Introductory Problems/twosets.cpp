#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    long long total = 1LL * n * (n + 1) / 2;
    if (total % 2) 
    {
        cout << "NO\n";
        return 0;
    }
    long long target=total/2;
    vector<int> a, b;
    for (int i = n; i >= 1; --i) 
    {
        if (target >= i) 
        {
            a.push_back(i);
            target -= i;
        } 
        else 
        {
            b.push_back(i);
        }
    }
    cout << "YES\n" << a.size() << "\n";
    for (auto x : a) cout << x << " ";
    cout << "\n" << b.size() << "\n";
    for (auto x : b) cout << x << " ";
    cout << "\n";
}

