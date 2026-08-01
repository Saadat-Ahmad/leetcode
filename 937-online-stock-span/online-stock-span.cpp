class StockSpanner {
public:
    vector<int> arr;
    
    StockSpanner() {
        arr.push_back(INT_MAX);
    }
    int next(int price) {
        arr.push_back(price);
        int s = arr.size()-1;
        int res = 0;
        for(const auto& it : arr | views::reverse) {
            if(it > price) break;
            else res++;
        }
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */