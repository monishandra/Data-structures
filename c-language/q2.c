// Program to count set bits in each number without bitwise operators.
#include <stdio.h>
int a=7;
int cnt=0;
//1010
int main() {
    for(int i = a;i>0;i=i/2){
        cnt = cnt + i%2;
    }
    printf("%d -count\n",cnt);
    return 0;
}
