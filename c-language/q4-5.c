#include <stdio.h>
int highest_duplicate(int arr[],int n){
    int i,j,maxelement,maxcount;
    int count=0;
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
                if(count>maxcount){
                    maxelement=arr[j];
                }
            }
            
        }
    }
    return maxelement;
}

int main(){
    int arr[]={1,2,5,1,1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d",highest_duplicate(arr,n));
}