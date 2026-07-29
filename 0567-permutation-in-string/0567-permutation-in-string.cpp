class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left = 0;
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        if(s1.length() > s2.length())
           return false;

        for(char ch : s1){
            freq1[ch - 'a']++;
        }
        for( int i = 0 ; i < s1.length() ; i++) {
             freq2[s2[i] - 'a']++;
        } if(freq1 == freq2){
                return true;
             }

        for(int right = s1.length(); right < s2.length(); right++){
                freq2[s2[left] - 'a']--;
                  left++;
                freq2[s2[right] - 'a']++;
                if(freq1 == freq2){
                    return true;
                }
            }

        
        
      return false;
       
    }
};