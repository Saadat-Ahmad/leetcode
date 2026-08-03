class Solution {
public:
    int mySqrt(int x) {
        int l = 1, r = x/2+1;
        int64_t m, s;
        while(l <= r){
            m = (l + r)/2;
            s = m*m;
            if(s == x) return m;
            if(s < x) l = m+1;
            else r = m-1;
        }
        return l-1;
    }
};