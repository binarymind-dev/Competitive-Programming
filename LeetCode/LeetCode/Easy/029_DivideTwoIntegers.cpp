#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Overflow case
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        
        // Determine sign
        bool negative = (dividend < 0) ^ (divisor < 0);
        
        // Work with long long to avoid overflow
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        
        long long result = 0;
        
        while(a >= b){
            long long temp = b;
            long long multiple = 1;
            
            // Double the divisor until it exceeds dividend
            while(a >= (temp << 1)){
                temp <<= 1;
                multiple <<= 1;
            }
            
            a -= temp;
            result += multiple;
        }
        
        return negative ? -result : result;
    }
};
