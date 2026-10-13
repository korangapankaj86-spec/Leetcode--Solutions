class StockSpanner {
public:
    vector<int> price;
    stack<int> s;

    StockSpanner() {
        
    }

    int next(int p) {
        price.push_back(p);

        int i = price.size() - 1;
        int ans;

        while (s.size() > 0 && price[s.top()] <= price[i]) {
            s.pop();
        }

        if (s.empty()) {
            ans = i + 1;
        }
        else {
            ans = i - s.top();
        }

        s.push(i);

        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */