// You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
#include <iostream>
using namespace std;
int main() 
{
    long long n, x, total = 0;
    cin >> n;
    long long expected = n * (n + 1) / 2;
    for (int i = 0; i < n - 1; ++i) 
    {
        cin >> x;
        total += x;
    }
    cout << expected - total << endl;
    return 0;
}
