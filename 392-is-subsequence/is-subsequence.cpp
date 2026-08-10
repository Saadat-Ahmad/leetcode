class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for(const auto& it : t){
            if(s[i] == it) i++;
            if(i == s.size()) return true; 
        }
        if(i != s.size()) return false;
        return true;
    }
};