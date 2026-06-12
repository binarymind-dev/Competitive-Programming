#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto& x : a) cin >> x;
    
    long long sum = 0;
    long long prev_ans = LLONG_MAX;
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
        long long ans = min(prev_ans, sum / (long long)(i + 1));
        prev_ans = ans;
        cout << ans;
        if (i < n - 1) cout << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
