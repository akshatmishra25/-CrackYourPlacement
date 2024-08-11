class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefSum = 0, n=nums.size(), ans = 0;
        unordered_map<int, int> freq;
        freq[0]=1;
        for(int i=0; i<n; i++){
            prefSum=(prefSum + nums[i]%k + k)%k;
            ans+=freq[prefSum];
            freq[prefSum]++;
        }
        return ans;
    }
};