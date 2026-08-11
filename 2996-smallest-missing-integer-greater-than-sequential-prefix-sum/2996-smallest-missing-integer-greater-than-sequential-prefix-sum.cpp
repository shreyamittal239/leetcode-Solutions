class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int>seen;
        int sum = nums[0];
        for(int i = 1; i <nums.size(); i++){
           if(nums[i]== nums[i-1] + 1){
            sum = sum+nums[i];
           } else 
           {
            break;
           }
        }

    for(int num : nums) {
    seen.insert(num);
     }

     int answer = sum;

     while(seen.count(answer)){
        answer++;
     }

     return answer;
      
    }
};