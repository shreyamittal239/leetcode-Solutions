class Solution {
public:
    int consecutiveNumbersSum(int n) {

        // Remove all factors of 2
        while (n % 2 == 0) {
            n /= 2;
        }

        int ans = 1;

        // Count divisors of the remaining odd number
        for (int i = 3; i * i <= n; i += 2) {

            if (n % i == 0) {

                int power = 0;

                while (n % i == 0) {
                    n /= i;
                    power++;
                }

                ans *= (power + 1);
            }
        }

        // If n is still > 1, it is a prime factor
        if (n > 1) {
            ans *= 2;
        }

        return ans;
    }
};