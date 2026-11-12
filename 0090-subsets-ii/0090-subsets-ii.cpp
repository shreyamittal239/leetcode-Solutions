class Solution {
public:
 vector<vector<int>>ans;
void solve(int index , vector<int>& nums , vector<int>& temp){
    if( index == nums.size()){
        ans.push_back(temp);
        return;
    }

    temp.push_back(nums[index]);
    solve(index+1 , nums , temp);

    temp.pop_back();

    index+=1;
    while( index < nums.size() && nums[index] == nums[index-1]){
        index++;
    }

    solve(index , nums ,temp);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin() , nums.end());
        ans.clear();

        solve(0 , nums ,temp );

        return ans;
    }
};