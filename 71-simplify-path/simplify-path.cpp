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
        while(!stk.empty()){
            tmp = stk.back();
            ans = "/" + tmp + ans;
            stk.pop_back();
        }
        if (ans.size() == 0) ans = "/";
        return ans;
    }
};