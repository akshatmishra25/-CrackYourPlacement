
class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a, a+n);
        sort(b, b+n, greater<long long>());
        
        for(int i=0; i<n; i++){
            if((long long)((long long)a[i]+(long long)b[i]) < k){
                return false;
            }
        }
        return true;
    }
};
