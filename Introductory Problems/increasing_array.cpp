//You are given an array of n integers. 
//You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
// On each move, you may increase the value of any element by one. What is the minimum number of moves required?
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    cin >> a[0];
    long long moves = 0;
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        if (a[i] < a[i - 1]) {
            moves += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << moves << "\n";
    return 0;
}
