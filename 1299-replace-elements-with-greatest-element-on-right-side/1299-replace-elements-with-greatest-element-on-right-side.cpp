class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        ans.push_back(-1);
        int largest = -1;
        for(int i =n-1; i>0 ; i--){
            if(arr[i]> largest){
            ans.push_back(arr[i]);
            largest=arr[i];
        }else {
            ans.push_back(largest);
        }
        }
      reverse(ans.begin(), ans.end());
      return ans;
    }
};