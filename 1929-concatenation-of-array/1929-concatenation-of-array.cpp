class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        // // for(int x:nums){
        // //     ans.push_back(x);
        // // }
        // // for(int x:nums){
        // //     ans.push_back(x);
        // // }
        // // return ans;
        // ans.insert(ans.end(),nums.begin(),nums.end());
        // return ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        return ans;
 
    }
};