#include<vector>
#include<iostream>
using namespace std;

void heapify(vector<int> &a,int i)
{
    int l=2*i+1;
    int r=l+1;
    int large;
    if(l<a.size() && a[l]>a[i])
        large=l;
    else
        large=i;
    if(r<a.size() && a[r]>a[large])
        large=r;
    if(large!=i)
    {
        int t=a[i];
        a[i]=a[large];
        a[large]=t; 
        heapify(a,large);
    }  
    
}

void buildheap(vector<int> &a)
{
    for(int i=(a.size()/2)-1;i>=0;i--){
        heapify(a,i);
    }
    
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    buildheap(arr);
    for(int i=0;i<n;i++)
    cout<<arr[i];

}