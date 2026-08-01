class StockSpanner {
public:
    stack<pair<int, int>> stk;  //{span, price}
    StockSpanner() {}
    
    int next(int price) {
        int span = 1;
        while(!stk.empty() && stk.top().second <= price){
            span += stk.top().first;
            stk.pop();
        }
        stk.push({span, price});
        return span;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */