class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int cur = 0;
        for(const auto& it : s){
            if (it == ' ') {
                cur = 0;
            } else {
                cur++;
                count = cur;
            }
        }
        return count;
    }
};