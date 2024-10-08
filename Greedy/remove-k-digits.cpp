class Solution {
public:
    
    string removeKdigits(string num, int k) {
        if(num.length()==k) return "0";

        stack<char> s;
        for(char c:num){
            while(k && !s.empty() && int(s.top())>int(c)){
                s.pop();
                k--;
            }
            s.push(c);
        }
        if(k) while(k--){
            s.pop();
        }

        stack<char> t;
        while(!s.empty()){
            t.push(s.top());
            s.pop();
        }
        while(t.top()=='0' && t.size()!=1){
            t.pop();
        }
        num="";
        while(!t.empty()){
            num.push_back(t.top());
            t.pop();
        }
        return num;
    }
};