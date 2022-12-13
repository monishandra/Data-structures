#include <stdio.h>

int main(){
    int arr[]={9,2,7,1,8,4,6,9,0,2,1,3,0,1,0,9,6,1,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count[10]={0};
    int k=9;
    int b[20];
    // Arranging the elements according to the Numbers
    for(int i=0;i<n;i++){
        ++count[arr[i]];
    }
    // Store the cummulative count
    for(int i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }
    // place the elements in output array
    for(int i=n-1;i>=0;i--){
        b[--count[arr[i]]]=arr[i];
    }
    // copying b elements to arr
    for(int i=0;i<n;i++){
        arr[i]=b[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}