class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int f = 0;
        int s = 1;
        //int delta = prices[s] - prices[f];
        int delta = 0;
        while (s < prices.size()) {
            if (prices[s] < prices[f]) {
                f = s;
                s++;
            }
            else if (delta < prices[s] - prices[f]) {
                delta = prices[s] - prices[f];
            }
            else {
                s++;
            }
        }
        //if (delta < 0) {
        //    delta = 0;
        //}
        return delta;
    }
};
