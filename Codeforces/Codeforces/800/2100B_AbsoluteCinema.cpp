#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        if ((1LL * n * k) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << (sum % 2 ? "YES\n" : "NO\n");
        }
    }

    return 0;
}
