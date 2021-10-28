#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> ad[n];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    
    
    for(int v=0;v<n;v++){
        cout<<v<< "-> ";        
        for(int data=0;data<ad[v].size();data++)
            cout<<ad[v][data]<<" ";
        cout<<endl;
    }

    
}