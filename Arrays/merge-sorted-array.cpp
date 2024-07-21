class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, count=1;
        while(i<m+n && j<n){
            if(nums2[j]<=nums1[i]){
                int cur=nums1[i];
                for(int k=i+1; k<=m+n-1; k++){
                    int temp = nums1[k];
                    nums1[k]=cur;
                    cur=temp;
                }
                nums1[i]=nums2[j];
                j++;
                count++;
            }
            else{
                i++;
            }
        }
        if(j<n){
            for(int k=m+count-1; k<m+n; k++){
                nums1[k]=nums2[j++];
            }
        }   
    }
};