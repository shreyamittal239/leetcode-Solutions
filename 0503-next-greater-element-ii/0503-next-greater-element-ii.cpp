class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;

        // Traverse the conceptual doubled array
        for (int i = 2 * n - 1; i >= 0; i--) {

            int current = nums[i % n];

            // Remove elements that cannot be the next greater
            while (!st.empty() && st.top() <= current) {
                st.pop();
            }

            // Only fill answer for the original array
            if (i < n) {
                if (!st.empty()) {
                    ans[i] = st.top();
                }
            }

            st.push(current);
        }

        return ans;
    }
};