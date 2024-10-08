class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = neededTime[0], maxTime = neededTime[0];
        for(int i=1; i<neededTime.size(); i++){
            if(colors[i]!=colors[i-1]){
                ans-=maxTime;
                maxTime=0;
            }
            ans+=neededTime[i];
            maxTime = max(maxTime, neededTime[i]);
        }
        return ans - maxTime;  
    }
};