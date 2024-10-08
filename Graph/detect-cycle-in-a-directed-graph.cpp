bool isCyclic(int V, vector<int> adj[]) {
        vector<int> inedge(V);
        for(int i=0; i<V; i++){
            for(auto j: adj[i]){
                inedge[j]++;
            }
        }
        queue<int> q;
        for(int i=0; i<V; i++){
            if(inedge[i]==0){
                q.push(i);
            }
        }
        int count = 0;
        while(!q.empty()){
            int topNode = q.front();
            q.pop();
            count++;
            for(int i: adj[topNode]){
                inedge[i]--;
                if(inedge[i]==0){
                    q.push(i);
                }
            }
        }
        if(count==V){
            return false;
        } 
        return true;
    }