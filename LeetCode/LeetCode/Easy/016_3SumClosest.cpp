#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];

                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }

                if (currentSum == target) {
                    return currentSum;  // exact match, can't get closer
                } else if (currentSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return closestSum;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {-1, 2, 1, -4};
    int target1 = 1;
    cout << "Test 1 (expected: 2): " << sol.threeSumClosest(nums1, target1) << endl;

    vector<int> nums2 = {0, 0, 0};
    int target2 = 1;
    cout << "Test 2 (expected: 0): " << sol.threeSumClosest(nums2, target2) << endl;

    vector<int> nums3 = {1, 1, 1, 0};
    int target3 = -100;
    cout << "Test 3 (expected: 2): " << sol.threeSumClosest(nums3, target3) << endl;

    return 0;
}
