class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int left =0;
        vector<int>answer;
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        
        if (p.length() > s.length()) {
    return {};
}
        for(char ch : p){
            freq2[ch - 'a']++;
        }
        for(int i =0 ; i < p.length(); i++){
        freq1[s[i] - 'a']++;
        }
        if(freq1 == freq2){
         answer.push_back(left);
        }

        for(int right = p.length(); right < s.length(); right++){
            freq1[s[left] - 'a']--;
            left++;
            freq1[s[right]- 'a']++;

            if( freq1 == freq2) {
                answer.push_back(left);
            }
        }
        return answer;
    }
};