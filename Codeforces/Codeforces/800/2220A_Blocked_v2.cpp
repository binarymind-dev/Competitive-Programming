#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& x : a) cin >> x;

        sort(a.begin(), a.end(), greater<int>());

        // Check for duplicates
        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i-1]) { 
                ok = false; 
                break; 
            }
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++)
                cout << a[i] << " \n"[i == n-1];
        }
    }
    return 0;
}
