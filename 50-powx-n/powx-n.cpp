class Solution {
private:
    double powerFun(double x, int64_t n){
        int64_t i = 1;
        double res = x;
        while(2*i <= n){
            res *= res;
            i *= 2;
        }
        while(i < n){
            res *= x;
            i++;
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