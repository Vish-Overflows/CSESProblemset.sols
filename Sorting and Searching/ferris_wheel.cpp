#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, max_weight;
    cin >> n >> max_weight;
    vector<int> weights(n);
    for (int &w : weights) cin >> w;
    sort(weights.begin(), weights.end());
    int i = 0, j = n - 1, count = 0;
    while (i <= j) 
    {
        if (weights[i] + weights[j] <= max_weight) i++;
        j--;
        count++;
    }
    cout << count << '\n';
}
