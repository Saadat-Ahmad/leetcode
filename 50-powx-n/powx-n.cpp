class Solution {
public:
    double myPow(double x, int64_t n) {
        double res = 1;
        if(x == 1) return 1;
        if(x == -1) return (n%2 == 0)? 1 : -1;
        if(n == INT_MIN) return 0;
        if(x == 0) return 0;
        if(n < 0){
            n = abs(n);
            while(n > 0){
                res *= x;
                n--;
            }
            return 1/res;
        }
        while(n > 0){
            res *= x;
            n--;
        }
        return res;
    }
};