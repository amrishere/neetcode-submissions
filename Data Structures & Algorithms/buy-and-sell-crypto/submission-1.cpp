class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int buying = prices[0];
        int profit = 0;
        for (int i = 0; i < prices.size(); i++){
            if( buying >prices[i]){
                buying = prices[i];
            }

            profit = prices[i] - buying;
            max = (max < profit) ? profit : max;
        }
        return max;
    }
};
