class NumArray {
public:
    vector<int> v;
    vector<int> pre;
    NumArray(vector<int>& nums) {
        v=nums;
        pre.push_back(0);
        for(int i=0; i<nums.size(); i++){
            pre.push_back(pre[i]+nums[i]);
        }
    }
    int sumRange(int left, int right) {
        return pre[right+1]-pre[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */