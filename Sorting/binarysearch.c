#include <stdio.h>
int binarysearch(int a[],int n,int key ){
    int l=0,r=n-1;
    while(l<r){
        int mid=(l+r)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key<a[mid]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    int a[10];
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    printf("enter the key to be found: ");
    scanf("%d",&key);
    int result = binarysearch(a,n,key);
    if(result==-1){
        printf("key not found");
    }
    else{
        printf("key has found");
    }
    return 0;
}