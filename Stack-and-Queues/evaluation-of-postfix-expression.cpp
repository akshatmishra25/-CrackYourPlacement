class Solution
{
    public:
    int operate(int a,int b,char ch){
        if(ch=='+'){
            return a+b;
        }
        else if(ch=='-'){
            return a-b;
        }
        else if(ch=='*'){
            return a*b;
        }
        else if(ch=='/'){
            return a/b;
        }
        else{
            return 0;
        }
    }
    int evaluatePostfix(string S)
    {
        stack<int> st;
        for(char c: S){
            if(c=='+' || c == '-' || c=='*' || c=='/'){
                int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                int ans = operate(y, x, c);
                st.push(ans);
            } else {
            
                st.push(c-'0');
            }
        }
        return st.top();
    }
};