class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = std::numeric_limits<int>::max();
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = std::min(minPrice, price);
            maxProfit = std::max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};