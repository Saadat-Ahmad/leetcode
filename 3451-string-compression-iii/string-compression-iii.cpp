class Solution {
public:
    string compressedString(string& word) {
        int i = 0;
        char c = word[0];
        string res = "";
        for(const auto& it : word){
            if(it == c && i < 9) i++;
            else{
                res += to_string(i);
                res += c;
                c = it;
                i = 1;
            }
        }
        res += to_string(i);
        res += c;
        return res;
    }
};