#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=(sizeof(arr)/sizeof(arr[0]));
    for(int i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    printf("\n");
}