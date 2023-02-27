#include <stdio.h>
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
    int j;
    for(j=0;j<n;j++){
        if(a[j]==key){
            printf("%d has found in %d position",key,j+1);
            break;
        }
    }
    if(j==n){
        printf("element not found");
    }
    return 0;
}