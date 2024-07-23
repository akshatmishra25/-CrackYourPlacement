class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size()) return -1;
        if(needle.size()==haystack.size()) return ((needle==haystack)? 0: -1);
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i]==needle[0] && (haystack.size()-i)>=needle.size()){
                
                string temp = haystack.substr(i, needle.size());
                if(temp==needle) return i;
            }
        }
        return -1;      
    }
};