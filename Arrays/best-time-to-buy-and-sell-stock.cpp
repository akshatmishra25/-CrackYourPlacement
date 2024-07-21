class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxDifference = INT_MIN, minElement = prices[0];

        for(int i=0; i<prices.size(); i++){
            maxDifference = max(maxDifference, prices[i]-minElement);
            minElement=min(minElement, prices[i]);
        }
        return maxDifference;        
    }
};