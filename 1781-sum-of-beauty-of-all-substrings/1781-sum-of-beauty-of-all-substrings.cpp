class Solution {
public:
    int beautySum(string s) {
            int n = s.size();
        int totalBeauty = 0;

        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);

            for (int j = i; j < n; j++) {
                // Update frequency of the newly added character
                freq[s[j] - 'a']++;

                int maxi = 0;
                int mini = INT_MAX;

                // Find maximum and minimum non-zero frequencies
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        maxi = max(maxi, freq[k]);
                        mini = min(mini, freq[k]);
                    }
                }

                // Add beauty of the current substring
                totalBeauty += maxi - mini;
            }
        }

        return totalBeauty;
    }
};