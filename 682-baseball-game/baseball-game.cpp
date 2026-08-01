class Solution {
public:
    int calPoints(vector<string>& operations) {
        deque<int> dq;
        int sum = 0;
        for(const auto& it : operations){
            if(it == "+"){
                dq.push_front(dq[0] + dq[1]);
                sum += dq.front();
            } else if(it == "C"){
                sum -= dq.front();
                dq.pop_front();
            } else if(it == "D"){
                dq.push_front(2*dq.front());
                sum += dq.front();
            } else {
                dq.push_front(stoi(it));
                sum += dq.front();
            }
            // if(dq.size() > 2) dq.pop_back();
        }
        return sum;
    }
};