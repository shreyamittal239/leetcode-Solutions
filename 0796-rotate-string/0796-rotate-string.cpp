class Solution {
public:
    bool rotateString(string s, string goal) {
       
        if (s.length() != goal.length()) {
            return false;
        }

        for (int rotation = 0; rotation < s.length(); rotation++) {

            if (s == goal) {
                return true;
            }

            // Save first character
            char first = s[0];

            // Shift all characters left
            for (int i = 0; i < s.length() - 1; i++) {
                s[i] = s[i + 1];
            }

            // Put first character at the end
            s[s.length() - 1] = first;
        }

        return false;
    }
};