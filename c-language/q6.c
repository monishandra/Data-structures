#include <stdio.h>
char distict(char arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        int flag=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] & (j!=i)){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%c",arr[i]);
        }
    }
}
int main(){
    char arr[]="andramonish";
    int n=sizeof(arr)/sizeof(arr[0]);
    distict(arr,n);
}