class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        stk.push(0);
        int dir1, dir2;
        dir2 = 1;
        bool flag = false;
        for(const auto& it : asteroids){
            flag = false;
            dir1 = (it < 0)? -1 : 1;
            if(dir1 >= dir2) stk.push(it);
            while(dir1 < dir2){
                if(stk.size() == 1) {
                    flag = true;
                    break;
                }
                else if(abs(stk.top()) > abs(it)) {
                    flag = false;
                    break;
                } 
                else if(abs(stk.top()) == abs(it)) {
                    flag = false;
                    stk.pop();
                    break;
                }
                else {
                    flag = true;
                    stk.pop();
                    dir2 = (stk.top() < 0)? -1 : 1;
                }
            }
            if(flag) stk.push(it);
            dir2 = (stk.top() < 0)? -1 : 1;
        }
        vector<int> arr(stk.size() - 1);
        int i = stk.size()-2;
        while(stk.size() > 1){
            arr[i] = stk.top();
            stk.pop();
            i--;
        }
        return arr;
    }
};