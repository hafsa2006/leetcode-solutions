class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0];
        int maxp=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            int profit=prices[i]-minp;

            maxp=max(maxp,profit);
            minp=min(minp,prices[i]);
        }
        return maxp;
    }
};