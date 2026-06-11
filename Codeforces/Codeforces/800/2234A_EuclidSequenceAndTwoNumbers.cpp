#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> b(n);
        for(auto& x : b) cin >> x;
        
        sort(b.rbegin(), b.rend()); // sort descending
        
        if(n == 2){
            cout << b[0] << " " << b[1] << "\n";
            continue;
        }
        
        bool ok = true;
        for(int i = 2; i < n; i++){
            if(b[i-2] % b[i-1] != b[i]){
                ok = false;
                break;
            }
        }
        
        if(ok) cout << b[0] << " " << b[1] << "\n";
        else   cout << -1 << "\n";
    }
    return 0;
}
