#include <iostream>
using namespace std;
using ll = long long;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll y, x;
        cin >> y >> x;
        ll z = max(x, y);
        if (z % 2 == 0) 
        {
            if (y == z)
                cout << z * z - x + 1 << "\n";
            else
                cout << (z - 1) * (z - 1) + y << "\n";
        } 
        else 
        {
            if (x == z)
                cout << z * z - y + 1 << "\n";
            else
                cout << (z - 1) * (z - 1) + x << "\n";
        }
    }
    return 0;
}
