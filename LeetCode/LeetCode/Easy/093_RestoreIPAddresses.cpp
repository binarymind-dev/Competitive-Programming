#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        backtrack(s, 0, 0, "", result);
        return result;
    }

private:
    void backtrack(string& s, int index, int part, string current, vector<string>& result) {
        if (part == 4 && index == s.size()) {
            current.pop_back(); // remove trailing dot
            result.push_back(current);
            return;
        }
        if (part == 4 || index == s.size()) return;

        for (int len = 1; len <= 3; len++) {
            if (index + len > s.size()) break;
            string seg = s.substr(index, len);
            if (seg.size() > 1 && seg[0] == '0') break; // no leading zeros
            if (stoi(seg) > 255) break;
            backtrack(s, index + len, part + 1, current + seg + ".", result);
        }
    }
};
