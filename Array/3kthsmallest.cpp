#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    // sort
    for(int i=1;i<n;i++)
    {
        int key=a[i];int j;
        for(j=i-1; j>=0 && key<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    cout<<a[k-1];

}