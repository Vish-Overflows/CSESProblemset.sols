#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> perms;
    do 
    {
        perms.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << perms.size() << '\n';
    for (const string& p : perms)
        cout << p << '\n';
}
