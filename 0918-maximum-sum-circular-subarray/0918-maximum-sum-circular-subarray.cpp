class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        int currentmin=0;
        int currentmax=0;
        int maxsum=INT_MIN;
        int minsum=INT_MAX;
        for(int i=0;i<n;i++){
            total+=nums[i];
            currentmax=max(currentmax+nums[i],nums[i]);
            maxsum=max(currentmax,maxsum);
            currentmin=min(currentmin+nums[i],nums[i]);
            minsum=min(currentmin,minsum);
        }
        if(maxsum<0){
            return maxsum;
        }else{
            return max(maxsum,total-minsum);
        }
    }
};