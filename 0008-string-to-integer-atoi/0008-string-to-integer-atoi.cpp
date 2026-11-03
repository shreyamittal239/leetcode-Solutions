class Solution {
public:
    int myAtoi(string s) {
        int i =0;
        while( i< s.size() && s[i] == ' '){
            i++;
        }

        int sign = 1;

        if(s[i] == '-'){
            sign = -1;
            i++;
        }

        else if(s[i] == '+'){
            sign = 1;
            i++;
        }

        long long num = 0 ;

        while(i < s.size() && s[i] >='0' && s[i] <='9'){
            int digit = s[i]-'0';

            num = num*10 + digit;

            if(num *sign > INT_MAX){
                return INT_MAX;
            }

            if( num*sign < INT_MIN){
                return INT_MIN;
            }

            i++;
        }

        return num *sign;
    }
};