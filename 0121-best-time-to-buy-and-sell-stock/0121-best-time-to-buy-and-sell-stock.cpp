class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxp=0;
        int maxsell=prices[n-1];
        for(int i=n-2;i>=0;i--){
            maxsell=max(maxsell,prices[i+1]);
            int profit=maxsell-prices[i];
            maxp=max(maxp,profit);
        }
        return maxp;
    }
};