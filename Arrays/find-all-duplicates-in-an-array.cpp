class Solution {
public:
    void swap(vector<int>& arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> ans;
       int i=0;
       while(i<nums.size()){
        if(nums[i]!=nums[nums[i]-1]){
            swap(nums, i, nums[i]-1);
        }
        else{
            i++;
        }
       }
       for(int index = 0; index<nums.size(); index++){
        if(nums[index]!=index+1){
            ans.push_back(nums[index]);
        }
       }
       return ans;
    }
};