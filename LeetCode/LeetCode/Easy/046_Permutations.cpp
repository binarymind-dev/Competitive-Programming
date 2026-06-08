class Solution {
public:
    void backtrack(vector<int>& nums, vector<int>& current, vector<bool>& used, vector<vector<int>>& result) {
        if (current.size() == nums.size()) {
            result.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;

            used[i] = true;
            current.push_back(nums[i]);

            backtrack(nums, current, used, result);

            used[i] = false;
            current.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        vector<bool> used(nums.size(), false);

        backtrack(nums, current, used, result);

        return result;
    }
};
