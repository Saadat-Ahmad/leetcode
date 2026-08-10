class Solution {
private:
    double powerFun(double x, int64_t n){
        int64_t i = 0;
        double res = 1;
        while(n > 0){
            if(n%2 == 1) res *= x;
            x *= x;
            n /= 2;
        }
        return res;
    }
public:
    double myPow(double x, int64_t n) {
        double res = 1;
        if(x == 1) return 1;
        if(x == -1) return (n%2 == 0)? 1 : -1;
        if(n == INT_MIN) return 0;
        if(x == 0) return 0;
        if(n == 0) return 1;
        res = powerFun(x, abs(n));
        if (n < 0) return 1/res;
        return res;
    }
};