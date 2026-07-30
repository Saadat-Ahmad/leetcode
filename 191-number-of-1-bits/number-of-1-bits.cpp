class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        for(int i = 0; i < 33; i++){
            if(n < 0) res++;
            n = n << 1;
        }
        return res;
    }
};