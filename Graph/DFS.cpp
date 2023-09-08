class Solution {
  public:
    void dfs(int a,vector<int> adj[],int visit[],vector<int> &sol){
            if(!visit[a]){
                sol.push_back(a);
                visit[a]++;
                int n=adj[a].size();
                for(int i=0;i<n;i++)
                    dfs(adj[a][i],adj,visit,sol);
            }
        }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> sol;
        int visit[V]={0};
        dfs(0,adj,visit,sol);
        return sol;
    }
};