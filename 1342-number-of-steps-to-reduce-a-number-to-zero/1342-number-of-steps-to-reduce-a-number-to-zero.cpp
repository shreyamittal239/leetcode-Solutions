
class Solution {
public:
    int solve(int num, int count) {

        if(num == 0) {
            return count;
        }

        if(num % 2 == 0) {
            num = num / 2;
        }
        else {
            num = num - 1;
        }

        count++;

        return solve(num, count);
    }

    int numberOfSteps(int num) {
        return solve(num, 0);
    }
};
