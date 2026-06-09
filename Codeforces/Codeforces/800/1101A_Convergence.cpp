#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto& x : a) cin >> x;
        sort(a.begin(), a.end());
        
        int ans = n;
        set<int> vals(a.begin(), a.end());
        for(int v : vals){
            int L = (int)(lower_bound(a.begin(), a.end(), v) - a.begin());
            int R = (int)(a.end() - upper_bound(a.begin(), a.end(), v));
            ans = min(ans, max(L, R));
        }
        cout << ans << "\n";
    }
    return 0;
}
