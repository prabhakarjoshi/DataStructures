#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(vector<int> ad[],vector<int> &vis,vector<pair<int,int> > &mydfs,int node)
{
   
    for(int i:ad[node])
    {
        if(!vis[i]){
            mydfs.push_back({i,node});
            dfs(ad,vis,mydfs,i);
        }
        
    }
}

vector<pair<int,int> > applydfs(vector<int > ad[],int n)
{
    vector<pair<int,int> > mydfs;
    vector<int> vis(n,0);
    for(int i=0;i<n;i++)
    {
        if(!vis[i]){
            dfs(ad,vis,mydfs,i);
        }
    }
    return mydfs;
}

int main()
{
    int n,m,key;
    cin>>n>>m;
    vector<int> ad[n];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    vector<pair<int,int> > path=applydfs(ad,n);
    // int key;
    cout<<"enter key";
    cin>>key;
    while(1){
        cout<<key<<"->";
        for(int  i = 0; i < path.size(); i++)
        {
            if(path[i].first==key)
                {key=path[i].second;
                break;}
        }
        
        if(key==-1)
        break;
    }
}