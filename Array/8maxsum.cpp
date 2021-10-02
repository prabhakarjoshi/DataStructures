#include<iostream>
using namespace std;

int main()
{   
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int maxsum=0,cursum=0;
    for(int i=0;i<n; i++)
    {
        cursum+=a[i];
        if(maxsum<cursum)
        maxsum=cursum;
        if(cursum<0)
        cursum=0;
    }
    cout<<maxsum;
}
