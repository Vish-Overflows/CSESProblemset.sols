#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];
    vector<int> L(n, -1), R(n, n);
    stack<int> st;
    for (int i = 0; i < n; ++i) 
    {
        while (!st.empty() && h[st.top()] <= h[i])
            st.pop();
        if (!st.empty()) L[i] = st.top();
        st.push(i);
    }
    while (!st.empty()) st.pop();
    for (int i = n - 1; i >= 0; --i) 
    {
        while (!st.empty() && h[st.top()] <= h[i])
            st.pop();
        if (!st.empty()) R[i] = st.top();
        st.push(i);
    }
    map<int, vector<int>> height_to_indices;
    for (int i = 0; i < n; ++i)
        height_to_indices[h[i]].push_back(i);
    vector<int> dp(n, 1);
    for (auto &[val, indices] : height_to_indices) 
    {
        for (int i : indices) 
        {
            for (int j = L[i] + 1; j < R[i]; ++j) 
            {
                if (j == i) continue;
                if (h[j] < h[i])
                    dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
}
