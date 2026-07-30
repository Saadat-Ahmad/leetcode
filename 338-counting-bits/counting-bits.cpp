class Solution {
private:
    int haming(int n){
        int res = 0;
        for(int i = 0; i < 32; i++){
            if(n < 0) res++;
            n = n << 1;
        }
        return res;
    }
public:
    vector<int> countBits(int n) {
        vector<int> arr (n+1);
        for(int i = 0; i <= n; i++){
            arr[i] = haming(i);
        }
        return arr;
    }
};