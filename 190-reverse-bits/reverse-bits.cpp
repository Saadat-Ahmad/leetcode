class Solution {
public:
    int reverseBits(int n) {
        int s = 0, p = 0;
        for(int i = 0; i < 32; i++){
            if(n < 0) s += pow(2,i);
            n = n << 1;
        }      
        return s;
    }
};