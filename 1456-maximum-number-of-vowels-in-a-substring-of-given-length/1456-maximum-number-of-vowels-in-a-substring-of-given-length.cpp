class Solution {
public:
   bool checkVowels(char c) {
    if ( c== 'a' || c=='e' || c=='i' || c=='o' ||c== 'u'){
        return true;
    }
    else {
        return false;
    }
   }
    int maxVowels(string s, int k) {
        int left = 0 ;
        
      int maxCount=0;
      int count = 0;
    for(int i =0 ; i < k ; i ++){
        if(checkVowels(s[i])){
            count++;
            maxCount = count;
        }
    }
    for(int right = k ; right < s.length(); right++){
       if(checkVowels(s[left])){
        count--;
       } 
       if(checkVowels(s[right])) {
    count++;
}
   maxCount = max(maxCount, count);
       left++;

    }
            
        return maxCount;
    }
};