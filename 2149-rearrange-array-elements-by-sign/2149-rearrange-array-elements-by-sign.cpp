class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int> neg;

        for(int i = 0; i< nums.size(); i++){
            if(nums[i]>0) {
            pos.push_back(nums[i]);
            }else {
                neg.push_back(nums[i]);
            }
        }

        int p=0, q=0, i=0;

        while(p<pos.size() && q<neg.size()){
            nums[i]=pos[p];
            i++;
            p++;
            nums[i]=neg[q];
            i++;
            q++;
        }

        return nums;
    }
};