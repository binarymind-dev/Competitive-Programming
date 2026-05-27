// LeetCode #4 - Median of Two Sorted Arrays
// Difficulty: Hard
// Topic: Binary Search / Divide and Conquer

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // nums1 lahan asave yasathi swap karo
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = (m + n + 1) / 2 - cut1;

            int left1  = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int left2  = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
            int right1 = (cut1 == m) ? INT_MAX : nums1[cut1];
            int right2 = (cut2 == n) ? INT_MAX : nums2[cut2];

            if (left1 <= right2 && left2 <= right1) {
                // Even length
                if ((m + n) % 2 == 0) {
                    return (max(left1, left2) + min(right1, right2)) / 2.0;
                }
                // Odd length
                else {
                    return max(left1, left2);
                }
            }
            else if (left1 > right2) {
                high = cut1 - 1;
            }
            else {
                low = cut1 + 1;
            }
        }
        return 0.0;
    }
};

// Test
int main() {
    Solution sol;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << "Test 1: " << sol.findMedianSortedArrays(nums1, nums2) << endl;
    // Output: 2.0

    vector<int> nums3 = {1, 2};
    vector<int> nums4 = {3, 4};
    cout << "Test 2: " << sol.findMedianSortedArrays(nums3, nums4) << endl;
    // Output: 2.5

    vector<int> nums5 = {};
    vector<int> nums6 = {1};
    cout << "Test 3: " << sol.findMedianSortedArrays(nums5, nums6) << endl;
    // Output: 1.0

    return 0;
}
