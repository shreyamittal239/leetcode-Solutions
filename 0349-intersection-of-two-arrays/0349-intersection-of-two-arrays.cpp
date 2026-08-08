class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int>freq2;

        for(int i : nums2){
            freq2.insert(i);
        }
        vector<int>ans;

        for(int i = 0 ; i < nums1.size(); i++){
            if(freq2.count(nums1[i])) {
                ans.push_back(nums1[i]);
                freq2.erase(nums1[i]);
            }
        }
        return ans;
    }
};