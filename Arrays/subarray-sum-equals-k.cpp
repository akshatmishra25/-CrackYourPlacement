class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), prefix[n], count = 0;
        prefix[0] = nums[0];
        for(int i=1; i<nums.size(); i++){
            prefix[i] = nums[i] + prefix[i-1];
        }
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(prefix[i] == k){
                count++;
            }
            if(mp.find(prefix[i]-k)!=mp.end()){
                count+=mp[prefix[i]-k];
            }
            mp[prefix[i]]++;
        }
        return count;        
    }
};