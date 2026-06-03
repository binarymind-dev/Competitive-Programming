class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long long result = 0;
        int sign = 1;
        
        // Step 1: Skip leading whitespace
        while(i < n && s[i] == ' ') i++;
        
        // Step 2: Check sign
        if(i < n && (s[i] == '-' || s[i] == '+')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        // Step 3: Read digits
        while(i < n && isdigit(s[i])){
            result = result * 10 + (s[i] - '0');
            
            // Step 4: Clamp if overflow
            if(result * sign > INT_MAX) return INT_MAX;
            if(result * sign < INT_MIN) return INT_MIN;
            i++;
        }
        
        return (int)(result * sign);
    }
};
