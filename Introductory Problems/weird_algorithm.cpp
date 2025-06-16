// CSES Problem: Weird Algorithm (https://cses.fi/problemset/task/1068)
// Given a number n, repeatedly apply: if even, divide by 2; if odd, multiply by 3 and add 1 — until n becomes 1. Print the sequence.
#include <iostream>
using namespace std;
int main() 
{
    long long n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        cout << n << " ";
    }
    return 0;
}
