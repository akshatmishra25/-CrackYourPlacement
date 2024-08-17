class Solution {
public:
    void helper(vector<int>& nums, int i, vector<int> cur, vector<vector<int>>& ans){
        if(i==nums.size()){
            ans.push_back(cur);
            return;
        }
        helper(nums, i+1, cur, ans);
        cur.push_back(nums[i]);
        helper(nums, i+1, cur, ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        helper(nums, 0, cur, ans);
        return ans;
    }
};