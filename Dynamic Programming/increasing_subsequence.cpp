#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<int> L;
    for (int x : a) 
    {
        auto it = lower_bound(L.begin(), L.end(), x);
        if (it == L.end()) L.push_back(x);
        else *it = x;
    }
    cout << L.size() << '\n';
}
