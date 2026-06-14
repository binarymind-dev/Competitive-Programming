#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n, x, y, z;
        scanf("%lld %lld %lld %lld",&n,&x,&y,&z);
        
        // Option 1: no AI
        long long op1 = (n + x + y - 1) / (x + y);
        
        // Option 2: with AI
        long long op2;
        long long during_setup = x * z;
        if(during_setup >= n){
            op2 = (n + x - 1) / x; // done during setup
        } else {
            long long remaining = n - during_setup;
            long long extra = (remaining + x + 10*y - 1) / (x + 10*y);
            op2 = z + extra;
        }
        
        printf("%lld\n", min(op1, op2));
    }
    return 0;
}
