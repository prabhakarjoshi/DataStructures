void dfs(vector<int> ad[],int node,stack<int> &s,vector<int> &vis){
	    vis[node]=1;
	    for(auto i:ad[node])
	    {
	        if(!vis[i])
	        dfs(ad,i,s,vis);
	    }
	    s.push(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[])                               
	{
	    // code here
	    vector<int> vis(V,0);
	    stack<int> s;
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	       
	            dfs(adj,i,s,vis);
	        }
	    }
	    vector<int> vv;
	    for(int i=0;i<s.size();i++)
	    {vv.push_back(s.top());s.pop();}
	    for(int i=0;i<V;i++)
	    cout<<vv[i]<<endl;
	    return vv;
	}