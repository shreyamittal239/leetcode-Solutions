
        class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strNums;

        // Step 1: Convert integers to strings
        for (int x : nums) {
            strNums.push_back(to_string(x));
        }

        // Step 2: Custom sorting
        sort(strNums.begin(), strNums.end(),
             [](string a, string b) {
                 return a + b > b + a;
             });

        // Step 3: Handle the all-zero case
        if (strNums[0] == "0") {
            return "0";
        }

        // Step 4: Combine all strings
        string ans = "";
        for (string s : strNums) {
            ans += s;
        }

        return ans;
    }
};
    