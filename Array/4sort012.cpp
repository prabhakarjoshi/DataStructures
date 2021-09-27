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
    // sort

    int c1=0,c2=0,c3=0;
    for(int it=0;it<n;it++)
    {
        if(a[it]==0)
        c1++;
        else if (a[it]==1)
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i<c1)
        a[i]=0;
        else if (i<(c1+c2))
        {
            a[i]=1;
        }
        else
        {
            a[i]=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

}