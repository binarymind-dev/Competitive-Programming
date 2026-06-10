#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(auto& x : p) cin >> x;
        
        long long count = 0;
        for(int i = 0; i < n-1; i++){
            int a = p[i], b = p[i+1];
            if(abs(a-b) == __gcd(a,b))
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}
