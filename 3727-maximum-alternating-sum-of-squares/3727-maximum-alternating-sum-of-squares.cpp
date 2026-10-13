class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs((long long)a) < abs((long long)b);
        });

        int n = nums.size();
        long long ans = 0;

        int left = 0;
        int right = n - 1;

        for (int i = 0; i < n; i++) {
            long long x;

            if (i % 2 == 0) {
                x = nums[right--];
                ans += x * x;
            } else {
                x = nums[left++];
                ans -= x * x;
            }
        }

        return ans;
    }
};