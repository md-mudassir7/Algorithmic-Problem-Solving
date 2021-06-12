#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    vector<int> res;
    void dfs(int src,vector<int> &visited,vector<int> adj[])
    {
        visited[src]=1;
        res.push_back(src);
        for(auto i:adj[src])
        {
            
            
            
            if(!visited[i])
                dfs(i,visited,adj);
        }
    }
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int> visited(V,0);
        dfs(0,visited,adj);
	    return res;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
