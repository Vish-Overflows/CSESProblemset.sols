//A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
// Given n, construct a beautiful permutation if such a permutation exists
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    if (n == 2 || n == 3) 
    {
        cout << "NO SOLUTION\n";
        return 0;
    }
    for (int i = 2; i <= n; i += 2)
        cout << i << " ";
    for (int i = 1; i <= n; i += 2)
        cout << i << " ";
    cout << "\n";
    return 0;
}



