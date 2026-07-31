class Solution {
public:
    int getSum(int a, int b) {
        int n;
        while(b != 0){
            n = a & b;
            n = n << 1;
            a = a ^ b;
            b = n;
        }
        return a;
    }
};