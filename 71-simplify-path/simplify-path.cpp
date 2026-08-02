class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stk;
        string tmp;
        string ans = "";
        int pop = 0;
        path += "/";
        for(const auto& it : path){
            if(it == '/') {
                if(tmp == ".") ;
                else if(tmp == ".."){
                    if(!stk.empty()) stk.pop();
                }
                else if (tmp.size() > 0) stk.push(tmp);
                tmp = "";
            } else {
                tmp += it;
            }
        }
        while(!stk.empty()){
            tmp = stk.top();
            ans = "/" + tmp + ans;
            stk.pop();
        }
        if (ans.size() == 0) ans = "/";
        return ans;
    }
};