//  Swap two integers with three logics
#include <stdio.h>
void usingtemp(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    
    printf("using temp : a=%d b=%d\n",a,b);
}
void usingoperator(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("using operator : a=%d b=%d\n",a,b);
}
void usingxor(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    printf("using xor : a=%d b=%d\n",a,b);
}

int main(){
    int a;
    printf("enter first number:");
    scanf("%d",&a);
    int b;
    printf("enter secound number:");
    scanf("%d",&b);
    usingtemp(a,b);
    usingoperator(a,b);
    usingxor(a,b);
}