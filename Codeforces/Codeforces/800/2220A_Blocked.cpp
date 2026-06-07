#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;
        
        sort(a.begin(), a.end());
        
        // Check duplicates
        bool hasDup = false;
        for (int i = 1; i < n; i++)
            if (a[i] == a[i-1]) { hasDup = true; break; }
        
        if (hasDup) { cout << -1 << "\n"; continue; }
        
        // Sort descending
        sort(a.rbegin(), a.rend());
        for (int x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
