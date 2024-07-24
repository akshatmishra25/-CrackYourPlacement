class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());

        int ans = nums[0]*nums[1]*nums[2];
        if(nums[nums.size()-1]<0 && nums[nums.size()-2]<0){
            ans = max(ans, (nums[0]*nums[nums.size()-1]*nums[nums.size()-2]));
        }
        return ans;        
    }
};