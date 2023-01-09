#include<stdio.h>
void heapify(int *ar,int n,int len){
    int left=2*n+1;
    int right=left+1;
    int largest;
    if(left>=len && right>=len)
        return;
    else if(left>=len)
    {
        largest=right;
    }
    else if(right>=len)
    {
        largest=left;
    }
    else
        largest=(ar[left]>ar[right])?left:right;
        
    if(ar[n]<ar[largest]){
        int t=ar[largest];
        ar[largest]=ar[n];
        ar[n]=t;
        heapify(ar,largest,len);
    }
    
}
void make_heap(int *ar,int len){
    for(int i=len-1;i>=0;i--)
    {
        heapify(ar,i,len);
    }
}
int main(){
    int n=10;
    int array[10]={0,1,9,2,8,3,7,4,6,5};

    make_heap(&array,n);
    // sorting
    int t=n;
    for(int i=0;i<n;i++)
        printf("%d..",array[i]);
    for(int i=0;i<n;i++)
    {
        printf("\n%d:",array[0]);
        array[0]=array[t-1];
        t--;
        heapify(array,0,t);
        for(int i=0;i<t;i++)
        printf("%d..",array[i]);
        printf("\n");
    
    }

}



