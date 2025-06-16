//You are given a list of n integers, and your task is to calculate the number of distinct values in the list.
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, x;
    cin >> n;
    set<int> s;
    while (n--) cin >> x, s.insert(x);
    cout << s.size() << '\n';
}
