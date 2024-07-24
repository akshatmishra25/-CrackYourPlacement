class Solution {
public:
    string convertToTitle(int columnNumber) {
        string a = "";
        while(columnNumber){
           columnNumber--;

           char temp='A'+columnNumber%26;
           a= temp+a;
           columnNumber/=26;
        } 
        return a;       
    }
};