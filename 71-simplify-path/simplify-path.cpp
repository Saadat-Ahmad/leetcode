class Solution {
public:
    string simplifyPath(string& path) {
        vector<string> stk;
        string tmp;
        string ans = "";
        path += "/";
        for(const auto& it : path){
            if(it == '/') {
                if(tmp == ".") ;
                else if(tmp == ".."){
                    if(!stk.empty()) stk.pop_back();
                }
                else if (tmp.size() > 0) stk.push_back(tmp);
                tmp = "";
            } else {
                tmp += it;
            }
        }
        for(const auto& it : stk){
            ans += "/" + it;
        }
        if (ans.size() == 0) ans = "/";
        return ans;
    }
};