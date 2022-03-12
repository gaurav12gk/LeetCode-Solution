class StockSpanner {
public:
    vector<pair<int,int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int cnt = 1;
        while(s.size() and s.back().first<=price)
        {
            cnt+=s.back().second;
            s.pop_back();
        }
        s.push_back({price,cnt});
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */