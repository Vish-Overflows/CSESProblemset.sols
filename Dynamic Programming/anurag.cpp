#include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template<class T> using oset = 
            tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
#define ll long long
#define ld long double
#define ar array
#define vi vector<int>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define endl "\n"
 
const int MOD = 1e9+7;
const int inf = 1e9;
const ll linf = 1e18;
 
const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// -------------------------------------------------- Main Code --------------------------------------------------
 
void sol() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    int biggerLeft[n], biggerRight[n];
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (st.size() && arr[st.top()] <= arr[i]) st.pop();
        if (st.size() == 0) biggerLeft[i] = n;
        else biggerLeft[i] = st.top();
        st.push(i);
    }
 
    while (st.size()) st.pop();
 
    for (int i = n-1; i >= 0; i--) {
        while (st.size() && arr[st.top()] <= arr[i]) st.pop();
        if (st.size() == 0) biggerRight[i] = n;
        else biggerRight[i] = st.top();
        st.push(i);
    }
 
    vi ord(n); iota(ord.begin(), ord.end(), 0);
    sort(all(ord), [&](int i, int j){
        return arr[i] > arr[j];
    });
 
    int dp[n+1] = {0};
    for (auto i : ord) {
        dp[i] = max(dp[biggerLeft[i]], dp[biggerRight[i]]) + 1;
    }
 
    // for (int i = 0; i < n; i++) cout << dp[i] << " ";
 
    cout << *max_element(dp, dp+n) << endl;
}
 
int main () {
    auto begin = std::chrono::high_resolution_clock::now();
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1; 
    // cin >> t; 
    while (t--) {
        sol();
    }
 
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
return 0;
}

 
  
