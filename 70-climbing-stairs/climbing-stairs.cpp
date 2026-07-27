class Solution {
public:
    int climbStairs(int n) {
        int one = 1, two = 1, buf;
        for(int i = 1; i < n; i++){
            buf = one + two;
            two = one;
            one = buf;
        }
        return one;
    }
};