class Solution {
public:
    int mySqrt(int x) {
       
        if (x < 2)
            return x;

        int low = 1;
        int high = x;
        int ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid == x) {
                return mid;
            }
            else if (mid * mid < x) {
                ans = mid;       // mid is a valid answer
                low = mid + 1;   // try for a bigger answer
            }
            else {
                high = mid - 1;  // mid is too large
            }
        }

        return ans;

    }
};