#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int items[MAX];
int top=-1;
int isfull(){
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int value){
    if(isfull()){
        printf("stack is full");
        exit(1);
    }
    top++;
    items[top]=value;
}
void pop(){
    if(isempty()){
        printf("stack is empty");
        exit(1);
    }
    top--;
}
void peak(){
    printf("%d",items[top]);
}
void printedstack(){
    for(int i=0;i<=top;i++){
        printf("%d ",items[i]);
    }
    printf("\n");
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    printedstack();
    pop();
    printedstack();
    peak();
    return 0;
}