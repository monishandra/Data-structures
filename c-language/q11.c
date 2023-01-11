#include <stdio.h>
int highest_duplicate(int arr[],int n){
    int i,j,maxelement,maxcount=0;
    int count=0;
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
        }
    }
    return maxcount;
}

int main(){
    int arr[]={1,2,5,1,1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",highest_duplicate(arr,n));
}