class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) {
            return "";
        }

        // Assume the first string is the prefix
        string prefix = strs[0];

        // Compare prefix with every other string
        for (int i = 1; i < strs.size(); i++) {

            int j = 0;

            // Compare characters one by one
            while (j < prefix.length() &&
                   j < strs[i].length() &&
                   prefix[j] == strs[i][j]) {
                j++;
            }

            // Keep only the common part
            prefix = prefix.substr(0, j);

            // If prefix becomes empty, no common prefix exists
            if (prefix.empty()) {
                return "";
            }
        }

        return prefix;
    }
};