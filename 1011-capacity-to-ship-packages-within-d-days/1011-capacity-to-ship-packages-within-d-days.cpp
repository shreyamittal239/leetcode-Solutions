class Solution {
public:

    int noofdays(vector<int> &arr , int capacity){
        int load = 0;
        int days = 1;
        for(int i =0 ; i< arr.size();i++){
            if( load +arr[i] > capacity){
                days = days+1;
                load = arr[i];
            }else {
                load = load + arr[i];
            }

        }
        return days;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin() , weights.end());
        int sum =0;
        for (int i = 0; i< weights.size(); i++){
            sum = sum + weights[i];
        }

        int high = sum ;
        int ans = low;

        while(low <= high){
            int mid = low + (high - low)/2;

           int reqdays = noofdays(weights,mid);

            if(reqdays <= days ){
                ans = mid;
                high = mid -1;
            }else {
                low= mid+1;
            }
        }
        return ans;
    }
};