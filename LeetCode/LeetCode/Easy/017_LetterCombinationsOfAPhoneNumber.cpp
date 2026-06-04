#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> result;
    map<char, string> phone = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
        {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
        {'8', "tuv"}, {'9', "wxyz"}
    };
    
    void backtrack(string& digits, int index, string current) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        for (char c : phone[digits[index]]) {
            backtrack(digits, index + 1, current + c);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        backtrack(digits, 0, "");
        return result;
    }
};
