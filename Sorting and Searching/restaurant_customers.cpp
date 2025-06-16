#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<pair<int, int>> events;
    for (int i = 0; i < n; ++i) 
    {
        int a, b;
        cin >> a >> b;
        events.emplace_back(a, 1);
        events.emplace_back(b, -1);
    }
    sort(events.begin(), events.end());
    int count = 0, max_count = 0;
    for (int i = 0; i < events.size(); ++i) 
    {
        count += events[i].second;
        max_count = max(max_count, count);
    }
    cout << max_count << '\n';
}
