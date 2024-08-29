/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution { //nearly 200+ ms
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < n ; j++) {
                //condition when i and j are equal
                if (i == j) {
                    continue;
                } if (nums[i] + nums[j] == target) {
                    return {i , j};
                }
            }
        }
        return {};
    }
};
// @lc code=end 

