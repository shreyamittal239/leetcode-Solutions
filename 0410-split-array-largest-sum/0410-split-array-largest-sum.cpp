class Solution {
public:

int countStudents(vector<int> &arr, long long pages){
    int students = 1;
    long long pagesStudent = 0;

    for(int i =0; i< arr.size(); i++){
        if(pagesStudent + arr[i] <= pages){
            pagesStudent += arr[i];
        }else {
            students++;
            pagesStudent = arr[i];
        }
       
    
    }
     return students;
};

    int splitArray(vector<int>& nums, int k) {
        if( k > nums.size()){
            return -1;
        }
        
        long long low = *max_element(nums.begin() , nums.end());
        long long high = accumulate(nums.begin(),nums.end(),0LL);

         while(low <= high){
            long long mid = low + (high - low)/2;
             int student = countStudents(nums,mid);
             if(student > k){
                low =mid+1;
             }else {
                high = mid-1;
             }
         }
       return low;
             
        
    }
};