#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int find(char *arr,char *tok){
    int arrlen=strlen(arr);
    int toklen=strlen(tok);
    int i,j,count=0,flag=0;
    for(i=0;i<arrlen;i++){
        if(arr[i]==tok[0]){
            for(j=0;j<toklen;j++){
                if(arr[i+j]==tok[j]){
                    flag++;
                }
            }
        }
        if(flag==toklen){
            count++;
        }
        flag=0;
    }
    return count;
}
int main(){
    char arr[]="LAPTOPTONTOP";
    char tok[]="TOP";
    printf("%d\n",find(arr,tok));
}