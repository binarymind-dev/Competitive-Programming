#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            // If char seen and within current window, shrink from left
            if (charIndex.count(c) && charIndex[c] >= left) {
                left = charIndex[c] + 1;
            }

            charIndex[c] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

// Driver code
int main() {
    Solution sol;
    cout << sol.lengthOfLongestSubstring("abcabcbb") << endl; // 3
    cout << sol.lengthOfLongestSubstring("bbbbb")    << endl; // 1
    cout << sol.lengthOfLongestSubstring("pwwkew")   << endl; // 3
    cout << sol.lengthOfLongestSubstring("")          << endl; // 0
    return 0;
}
