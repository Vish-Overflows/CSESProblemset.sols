//Your task is to count for k=1,2,..upton n
//Count and print  the number of ways two knights can be placed on a k times k square chessboard so that they do not attack each other.
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    for (long long k = 1; k <= n; ++k) 
    {
        long long total = k*k*(k*k - 1)/2;
        long long attacking = 4*(k - 1)*(k - 2);
        cout << total - attacking << '\n';
    }
    return 0;
}
