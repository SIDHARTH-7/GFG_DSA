class Solution {
    public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> sol;
        int vis[V]={0};
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int vert=q.front();
            q.pop();
            vis[vert]++;
            sol.push_back(vert);
            for(auto i:adj[vert]){
                if(!vis[i]){
                    vis[i]++;
                    q.push(i);
                }
            }
        }
        return sol;
    }
};