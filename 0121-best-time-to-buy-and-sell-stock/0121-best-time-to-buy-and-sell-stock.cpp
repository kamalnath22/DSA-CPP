class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<cheapest){
                cheapest=prices[i];
            }
            maxprofit=max(maxprofit,prices[i]-cheapest);
        }
        return maxprofit;
    }
};