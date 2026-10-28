class Solution {
public:
    long long wonderfulSubstrings(string word) {
        
       vector<long long> seen(1 << 10, 0);

        int mask = 0;
        long long ans = 0;

        seen[0] = 1;  // Empty prefix

        for (char c : word) {
            // Toggle the bit for this character
            mask ^= (1 << (c - 'a'));

            // Case 1: All character frequencies are even
            ans += seen[mask];

            // Case 2: Exactly one character has odd frequency
            for (int b = 0; b < 10; b++) {
                int candidate = mask ^ (1 << b);
                ans += seen[candidate];
            }

            // Record this prefix mask
            seen[mask]++;
        }

        return ans;
    }
};