#include<vector>
#include<iostream>
using namespace std;

void heapify(vector<int> &a,int i,int n)
{
    int l=2*i+1;
    int r=l+1;
    int large;
    if(l<n && a[l]>a[i])
        large=l;
    else
        large=i;
    if(r<n && a[r]>a[large])
        large=r;
    if(large!=i)
    {
        int t=a[i];
        a[i]=a[large];
        a[large]=t; 
        heapify(a,large,n);
    }  
    
}

void buildheap(vector<int> &a,int n)
{
    for(int i=(n/2)-1;i>=0;i--){
        heapify(a,i,n);
    }
    
}

void extractmax(vector<int> a,int &n){
    int t=a[0];
    a[0]=a[n-1];
    a[n-1]=t;
    n--;
    heapify(a,0,n);
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    buildheap(a,n);
    int size=n;
    for(int i=0;i<n;i++)
    {
        extractmax(a,n);
    }
    for(int i=0;i<a.size();i++)
    cout<<a[i];
}