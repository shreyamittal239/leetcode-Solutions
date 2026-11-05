
class Solution {
public:

    bool possible(vector<int>& arr, int day, int m, int k) {
        int count = 0, noofb = 0;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] <= day) {
                count++;
            }
            else {
                noofb += (count / k);
                count = 0;
            }
        }

        noofb += (count / k);

        return noofb >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        if(1LL * m * k > n) {
            return -1;
        }

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = high;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(possible(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
