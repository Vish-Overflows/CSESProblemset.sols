#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int appl_num, apart_num, diff_limit;
    cin >> appl_num >> apart_num >> diff_limit;
    vector<int> arr_appl(appl_num), arr_apart(apart_num);
    for (int &x : arr_appl) cin >> x;
    for (int &x : arr_apart) cin >> x;
    sort(arr_appl.begin(), arr_appl.end());
    sort(arr_apart.begin(), arr_apart.end());
    int i = 0, j = 0, count = 0;
    while (i < appl_num && j < apart_num) 
    {
        if (abs(arr_appl[i] - arr_apart[j]) <= diff_limit) 
        {
            count++, i++, j++;
        } 
        else if (arr_apart[j] < arr_appl[i] - diff_limit) 
        {
            j++;
        } 
        else 
        {
            i++;
        }
    }
    cout << count<< '\n';
}
