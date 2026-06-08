#include <bits/stdc++.h>
using namespace std;

const long long MOD = 676767677;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int lastGt1 = -1;
        for (int i = 0; i < n; i++)
            if (a[i] > 1) lastGt1 = i;

        long long ans = 0;
        for (int x : a)
            if (x > 1) ans = (ans + x) % MOD;

        for (int i = lastGt1 + 1; i < n; i++) {
            if (a[i] == 1) { ans = (ans + 1) % MOD; break; }
        }

        cout << ans << "\n";
    }
    return 0;
}
