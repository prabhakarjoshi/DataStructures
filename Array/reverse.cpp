#include<iostream>
using namespace std;


void rev(int a[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
}

int main()
{
    int  n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    rev(a,n);

    for(int i =0;i<n;i++)
    cout<<a[i];
}