class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;

        for(char c : s){
            freq[c]++;
        }

        int ans ;
        ans = freq[s[0]];

        for(int i = 0; i<s.length(); i++){
            if(freq[s[i]] != ans){
                return false;
            }
        }
        return true;
    }
};