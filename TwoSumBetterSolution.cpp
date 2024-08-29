/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution { //13 ms
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> mpp;
        int n = nums.size();
        for (int i = 0 ; i < n ; i++) {
            int num  = nums[i]; //first value
            //now the remaining we need
            int remaining = target - num;
            if (mpp.find(remaining) != mpp.end()) {
                return {mpp[remaining] , i};
            }
            mpp[num] = i;
        }
        return {-1 , -1};
    }
};
// @lc code=end

