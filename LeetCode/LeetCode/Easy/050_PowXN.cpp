class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if(N < 0){
            x = 1.0 / x;
            N = -N;
        }
        return fastPow(x, N);
    }

private:
    double fastPow(double x, long long n){
        if(n == 0) return 1.0;
        if(n % 2 == 0){
            double half = fastPow(x, n/2);
            return half * half;
        } else {
            return x * fastPow(x, n-1);
        }
    }
};
