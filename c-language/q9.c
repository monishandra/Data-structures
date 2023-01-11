#include <stdio.h>
#include <stdlib.h>
int main(){
    int row=1,col=1;
    int *arr=(int*)malloc(sizeof(int)*row*col);
    arr[0]=1;
    printf("%x",sizeof(arr));
}