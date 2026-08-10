class Solution {
public:
    int reverse(int x) {
        bool ngtv = false;
        if(x < 0) ngtv = true;
        // x = abs(x);
        string s = to_string(x);
        ::reverse(s.begin(), s.end());
        int64_t ans = stoll(s);
        ans = (ngtv)? -1*ans : ans;
        if(ans < INT_MIN || ans > INT_MAX) return 0;
        else return (int)ans;
    }
};