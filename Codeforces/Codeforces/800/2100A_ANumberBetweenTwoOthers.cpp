#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // y/x > 2 asel tar z exist hoil
        if (y / x > 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
