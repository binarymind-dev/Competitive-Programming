#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        
        long long sumB = 0, maxA = 0;
        for(int i = 0; i < n; i++){
            // b[i] madhe larger value, a[i] madhe smaller
            long long hi = max(a[i], b[i]);
            long long lo = min(a[i], b[i]);
            sumB += hi;        // sum of b
            maxA = max(maxA, lo); // max of a
        }
        cout << maxA + sumB << "\n";
    }
    return 0;
}
