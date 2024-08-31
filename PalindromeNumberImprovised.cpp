class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman;
            roman['I'] = 1;
            roman['V'] = 5;
            roman['X'] = 10;
            roman['L'] = 50;
            roman['C'] = 100;
            roman['D'] = 500;
            roman['M'] = 1000;
        //now we will be maintaining a rezult
        int result = 0;
        for (int i = 0 ; i < s.length() ; i++) {
            // if (i < s.length() - 1 && roman[s[i]] < roman[s[i+1]]) {
            //     //i < s.length() - 1 -->so that we dont go out of bounds
            //     result = result - roman[s[i]]; //12ms
            // }
            if (roman[s[i]] < roman[s[i+1]]) {
                //i < s.length() - 1 -->so that we dont go out of bounds
                result = result - roman[s[i]]; //12ms
            } else {
                result = result + roman[s[i]];
            }
        }
        return result;
    }
};
