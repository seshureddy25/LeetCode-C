class StockSpanner {
public:
    stack<pair<int, int>> st;
    StockSpanner() {

    }
    int next(int price) {
        int count = 1;
        while (!st.empty() && st.top().first <= price) {
            count += st.top().second;
            st.pop();
        }
        st.push({price, count});
        return count;
    }
};