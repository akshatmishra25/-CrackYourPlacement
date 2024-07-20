class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int end = nums.size()-1;
      for(int i=nums.size()-1; i>=0; i--){
        if(nums[i]==0){
            int flag = 0;
            for(int j=i+1; j<=end; j++){
                flag=1;
                swap(nums[j-1], nums[j]);
            }
            if(flag) end--;
        }
      }  
    }
};