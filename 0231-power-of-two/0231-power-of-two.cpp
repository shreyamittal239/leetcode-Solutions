
class Solution {
public:
    bool solve(int n) {

        if(n == 1) {
            return true;
        }

        if(n <= 0 || n % 2 != 0) {
            return false;
        }

      

        // Complete the recursive call here
         return solve(n / 2);

    }

    bool isPowerOfTwo(int n) {
        return solve(n);
    }
};
