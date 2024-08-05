bool check (int ind, int V, vector<int> adj[], vector<bool> &isVisited){
        queue<pair<int, int>> q;
        
        isVisited[ind] = true; // initial node visited
        q.push(make_pair(ind, -1)); // initial node doesn't have any parent
        
        while (!q.empty()){
            pair<int, int> curr = q.front(); // get the current node details
            
            int val = curr.first; // value of current node
            int par = curr.second; // parent of current node
            
            q.pop(); // pop the current node from queue
            
            for (auto i: adj[val]){
                
                if (!isVisited[i]){ // if not visited

                    isVisited[i] = true; // mark adj nodes of current node as visited
                    q.push(make_pair(i, val)); // assign parent
                    
                }else if (par != i){ // already visited but not child of current node
                    return true;
                }
            }
        }
        
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> isVisited(V+1, false);
        
        for (int i=1; i<V; i++){ // iterate through all nodes
            if (!isVisited[i]){
                if (check(i, V, adj, isVisited)) return true;
            }
        }
        return false;
    }