class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int c=0;
        for(auto it:mp){
            nums[c]=it.first;
            c++;

        }
        return c;
    }
};