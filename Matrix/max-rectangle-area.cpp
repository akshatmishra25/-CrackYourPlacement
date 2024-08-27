class Solution{
  private:
    int histogram(int a[], int m){
        stack<int> s;
        vector<int> l(m, 0);
        for(int i=0; i<m; i++){
            while(!s.empty() && a[s.top()]>=a[i]){
                s.pop();
            }
            l[i] = (s.size()==0)?-1: s.top();
            s.push(i);
        }
        
        stack<int> ss;
        vector<int> r(m, 0);
        for(int i=m-1; i>=0; i--){
            while(!ss.empty() && a[ss.top()]>=a[i]){
                ss.pop();
            }
            r[i]=(ss.size()==0)?m:ss.top();
            ss.push(i);
        }
        
        int ans = 0;
        for(int i=0; i<m; i++){
            int left = abs(i-l[i])-1;
            int right = abs(i-r[i])-1;
            int val = a[i]+(a[i]*left)+(a[i]*right);
            ans = max(ans, val);
        }
        return ans;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                if(M[i][j])
                    M[i][j]+=M[i-1][j];
            }
        }
        int res = 0;
        for(int i=0; i<n; i++){
            res=max(res, histogram(M[i], m));
        }
        return res;
    }
};