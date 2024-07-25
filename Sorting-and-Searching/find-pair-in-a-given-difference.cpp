class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        for(int i=0; i<n-1; i++){
            int lo=i+1, hi = n-1;
            while(lo<=hi){
                int mid = lo+(hi-lo)/2;
                if(arr[mid]-x==arr[i]){
                    return 1;
                }
                else if(arr[mid]-x<arr[i]){
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                }
            }
        }
        return -1;
    }
};