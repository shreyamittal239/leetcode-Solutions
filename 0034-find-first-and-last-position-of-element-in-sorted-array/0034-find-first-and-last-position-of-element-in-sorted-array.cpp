class Solution {
public:

int findFirst ( vector<int>&nums , int target ){
    int start = 0 ;
    int end = nums.size()- 1;
    int ans = -1;

    while( start <= end){
         int mid = start + (end - start) /2;

         if(target == nums[mid]){
            ans = mid;
            end = mid -1;
         }else if ( target < nums[mid]) {
            end = mid - 1;
         } else {
            start = mid+1;
         }
    }
    return ans;
}

int findLast ( vector<int>&nums , int target ){
    int start = 0 ;
    int end = nums.size()- 1;
    int ans = -1;

    while( start <= end){
         int mid = start + (end - start) /2;

         if(target == nums[mid]){
            ans = mid;
            start = mid +1;
         }else if ( target < nums[mid]) {
            end = mid - 1;
         } else {
            start = mid+1;
         }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
      return {findFirst(nums, target), findLast(nums, target)};

 } 
};