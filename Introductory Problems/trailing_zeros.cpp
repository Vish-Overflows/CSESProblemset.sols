#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int res = 0;
    while (n) 
    {
        res += n / 5;
        n /= 5;
    }
    cout << res << "\n";
}
