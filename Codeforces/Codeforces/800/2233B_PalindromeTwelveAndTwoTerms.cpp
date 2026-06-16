#include <bits/stdc++.h>
using namespace std;

bool isPal(long long x) {
    string s = to_string(x);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long mod_to_pal[12];
    fill(mod_to_pal, mod_to_pal + 12, -1);
    int found = 0;
    for (long long x = 0; found < 12; x++) {
        if (isPal(x)) {
            int r = x % 12;
            if (mod_to_pal[r] == -1) {
                mod_to_pal[r] = x;
                found++;
            }
        }
    }
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a = mod_to_pal[n % 12];
        if (a <= n) {
            cout << a << " " << n - a << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
