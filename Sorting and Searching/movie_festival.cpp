#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<pair<int, int>> movies(n);
    for (auto& [start, end] : movies) 
    {
        cin >> start >> end;
    }
  sort(movies.begin(), movies.end(), [](const auto& a, const auto& b) 
   {
        return a.second < b.second;
    });
    int count = 0, last_end = 0;
    for (const auto& [start, end] : movies) 
  {
        if (start >= last_end) 
        { 
            count++;
            last_end = end;
        }
    }
    cout << count << '\n';
}
