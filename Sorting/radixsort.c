#include <stdio.h>
int getmax(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    return arr[0];
}
int countsort(int arr[],int n,int pos){
    int count[10]={0};
    int k=9;
    int b[20];
    for(int i=0;i<n;i++){
        ++count[(arr[i]/pos)%10];
    }
    for(int i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>0;i--){
        b[--count[(arr[i]/pos)%10]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=b[i];
    }
}
int RadixSort(int arr[],int n){
    int max=getmax(arr,n);
    for(int pos=1;max/pos>0;pos=pos*10){
        countsort(arr,n,pos);
    }
}
int main()
{
    int arr[10]={432,8,530,90,88,231,11,45,677,199};
    int n=sizeof(arr)/sizeof(arr[0]);
    RadixSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}