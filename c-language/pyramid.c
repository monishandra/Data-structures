#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    for(int i=n;i>=1;i--){
        if(i%2!=0){
            int k=(n-i)/2;
            while(k--){
                printf(" ");
            }
            for(int j=i;j>=1;j--){
                printf("*");
            }
            printf("\n");
        }
    }
}