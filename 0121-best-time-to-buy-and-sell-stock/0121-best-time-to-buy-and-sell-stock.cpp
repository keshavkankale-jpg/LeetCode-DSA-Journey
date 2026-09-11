class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        int buy=INT_MAX;
        int max_profit=INT_MIN;

        for(int i=0; i<n; i++){
            if(buy>prices[i]){
                buy=prices[i];
            }

            int profit=prices[i]-buy;

            if(profit>max_profit){
                max_profit=profit;
            }
        }
        return max_profit;
    }
};