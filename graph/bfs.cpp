#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<pair<int,int> > applybfs(vector<int> ad[],int n){
    vector< pair<int,int> > bfs;
    vector<int> vis(n,0);//initialised with 0
    for(int i=0;i<n;i++)
    if(!vis[i]){
        queue<int> q;
        q.push(i);
        vis[i]=1;
        bfs.push_back({i,-1});
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            
            for(auto k:ad[node]){
                if(!vis[k]){
                    q.push(k);
                    vis[k]=1;
                    bfs.push_back({k,node});
                }
            }
        }
    }
    return bfs;
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
    vector<pair<int,int> > bfs=applybfs(ad,n);
    cout<<"enter key";
    cin>>key;
    while(1){
        cout<<key<<"->";
        for(int  i = 0; i < bfs.size(); i++)
        {
            if(bfs[i].first==key)
                {key=bfs[i].second;
                break;}
        }
        
        if(key==-1)
        break;
    }

// ############ print pair #############
    // for(int i = 0; i < bfs.size(); i++)
    // {
    //     cout << bfs[i].first << "->" << bfs[i].second << endl;
    // }
}
    
