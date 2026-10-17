class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";

        // Step 1: Extract words, ignoring extra spaces
        for (char c : s) {
            if (c != ' ') {
                word += c;
            } else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }

        // Store the last word
        if (!word.empty()) {
            words.push_back(word);
        }

        // Step 2: Reverse words using two pointers
        int left = 0;
        int right = words.size() - 1;

        while (left < right) {
            swap(words[left], words[right]);
            left++;
            right--;
        }

        // Step 3: Join words with single spaces
        string ans = "";

        for (int i = 0; i < words.size(); i++) {
            if (i > 0) {
                ans += ' ';
            }
            ans += words[i];
        }

        return ans;
    }
};