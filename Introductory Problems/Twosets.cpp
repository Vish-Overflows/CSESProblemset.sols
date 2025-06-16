#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    long long sum = 1LL * n * (n + 1) / 2;
    if (sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }
    vector<int> a, b;
    int l = 1, r = n;
    bool turn = true;
    while (l < r) 
    {
        if (turn) 
        {
            a.push_back(l);
            a.push_back(r);
        } 
        else 
        {
            b.push_back(l);
            b.push_back(r);
        }
        ++l;
        --r;
        turn = !turn;
    }
    if (l == r) a.push_back(l); 
    cout << "YES\n";
    cout << a.size() << "\n";
    for (int x : a) cout << x << " ";
    cout << "\n" << b.size() << "\n";
    for (int x : b) cout << x << " ";
    cout << "\n";
    return 0;
}
