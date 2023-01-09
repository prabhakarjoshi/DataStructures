#include<stdio.h>

void merge(int *ar,int st,int en){
    int mid=(st+en)/2;
    int a[en-st+1];
    int k=0,i,j;
    for( i=st,j=mid+1;i<=mid && j<=en;){
        a[k++]=(ar[i]>ar[j])?ar[i++]:ar[j++];
        // j++;
    }
    while(i<=mid){
        a[k++]=ar[i++];
    }
    while(j<=en){
        a[k++]=ar[j++];
    }
    k=0;
    while(st<=en){
        ar[st++]=a[k++];
    }
}

void merge_sort(int *ar,int st, int en){
    if(st==en) return;
    int mid=(st+en)/2;
    merge_sort(ar,st,mid);
    merge_sort(ar,mid+1,en);
    merge(ar,st,en);
}

int main(){
    int array[10]={0,1,9,2,8,3,7,4,6,5};
    int n=10;
    merge_sort(array,0,n-1);
    for(int i=0;i<n;i++)
    printf("%d,",array[i]);
}