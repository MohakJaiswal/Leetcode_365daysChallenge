/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution { //3m / 7ms / 8ms
public:
    bool isPalindrome(int x) {
        //checking if the value is not negative
        if (x < 0) {
            return false;
        }
        //retrieving the value of x in another variable
        int val = x;
        //variable for storing reverse number
        int revNum = 0;
        while (val > 0) {
            int digit; 
            digit = val % 10; //if 121 , we get 1 on the right hand side
            revNum = revNum * 10 + digit; //that will be 0 * 10 + 1;
            //now we need to get the 1st 2 digits
            val = val / 10;
        }
        if (revNum == x) {
            return true;
        }else {
            return false;
        }
    }
};
// @lc code=end

