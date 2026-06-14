#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;

        int g = 0;
        for(int x : a) g = __gcd(g, 100 / x);

        cout << (g == 1 ? "Yes" : "No") << "\n";
    }
    return 0;
}
