class Solution {
public:
    vector<int> countBits(int n) {
        int pow = 1;
        vector<int> arr (n+1);
        for(int i = 0; i <= n; i++){
            if(i == 2*pow) pow *= 2;
            if(i == 0) arr[i] = 0;
            else arr[i] = 1 + arr[i-pow]; 
        }
        return arr;
    }
};
