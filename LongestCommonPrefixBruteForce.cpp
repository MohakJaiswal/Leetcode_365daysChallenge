class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Handle the case when the input vector is empty
        // We have to make an empty string
        string ans = "";
        int n = strs.size();
        // First of all, traversing all the characters of the first string
        for (int i = 0; i < strs[0].length(); i++) {
            char ch = strs[0][i];
            // Now we have to check if it's a match or not
            bool match = true;
            // Now we have to do comparison with the remaining strings from the first string - ch
            // j will start from 1 because the 1st string is already checked above
            for (int j = 1; j < n; j++) {
                // If nothing is matching
                if (i >= strs[j].length() || ch != strs[j][i]) {
                    match = false;
                    break;
                }
            } // Now we will check if our match is false
            if (match == false) {
                break;
            } else {
                // match == true
                // Then we have to add it to the answer
                ans.push_back(ch);
            }
        } return ans;
    }
};
