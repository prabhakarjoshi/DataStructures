#include<stdio.h>

void quick_sort(int *ar,int st, int en){
    // pivot=ar[en];
    
    if(st>=en) return;
    int j=st;
    for(int i=st;i<en;i++){
        if(ar[i]>=ar[en]){
            int t=ar[i];
            ar[i]=ar[j];
            ar[j]=t;
            j++;
        }
    }
    int t=ar[j];
    ar[j]=ar[en];
    ar[en]=t;
    quick_sort(ar,st,j-1);
    quick_sort(ar,j+1,en);
}
int main(){
    int array[10]={0,1,9,2,8,3,7,4,6,5};
    int n=10;
    quick_sort(array,0,n-1);
    for(int i=0;i<n;i++)
    printf("%d.,",array[i]);
}