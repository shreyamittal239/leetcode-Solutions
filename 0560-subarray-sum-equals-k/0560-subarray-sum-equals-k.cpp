class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int prefixSum = 0;
        int count = 0;
        mp[0] = 1;

        for(int i =0 ; i < nums.size(); i++){
            prefixSum = prefixSum + nums[i];
          

          if(mp.count(prefixSum -k)){
            count = count + mp[prefixSum - k];
          }

          mp[prefixSum]++;
        }

        return count;
    }
};