class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n = gain.size();
        vector<int> prefix(n);
        prefix[0] = gain[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + gain[i];
        }
        int maxi = 0; 

        for (int i = 0; i < n; i++) {
            maxi = max(maxi, prefix[i]);
        }

        return maxi;
    }
};