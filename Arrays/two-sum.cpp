class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> arr(2);
       for(int i=0; i<nums.size()-1; i++) {
           for(int j=i+1; j<nums.size(); j++){
               if((nums[i]+nums[j])==target){
                   arr[0]=i;
                   arr[1]=j;
                   return arr;
               }
           }
       }
        arr[0]=-1;
        arr[1]=-1;
        return arr;     
    }
};