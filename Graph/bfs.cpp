class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        queue<int> q;
        q.push(0);
        vector<bool> vis(V, false);
        vis[0]=true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int child: adj[node]){
                if(!vis[child]){
                    q.push(child);
                    vis[child]=true;
                }
            }
        }
        return ans;
    }
};