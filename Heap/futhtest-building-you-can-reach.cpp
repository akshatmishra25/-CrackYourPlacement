class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> jumps;
        for(int i=0; i<heights.size()-1; i++){
            int diff = heights[i+1]-heights[i];
            if(diff>0){
                jumps.push(diff);
                if(jumps.size()>ladders){
                    int bricks_needed=jumps.top();
                    jumps.pop();
                    if(bricks_needed > bricks) return i;
                    bricks-=bricks_needed;
                }
            }
        }
        return heights.size()-1;
    }
};