#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    cin>>b[i];
    int i=0,j=0;
    int un=0,in=0;
    while(j!=m && i!=n)
    {cout<<i<<j<<m<<n<<endl;
        if(a[i]<b[j])
        i++;
        else if (a[i]>b[j])
            j++;
        else{
            i++;j++;in++;
        }    
    }
    un=n+m-in;
    cout<<"intersection="<<in;
    cout<<"union="<<un;

}    