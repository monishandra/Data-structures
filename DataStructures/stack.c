#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int c=0;
struct stack{
    int items[MAX];
    int top;
};
typedef struct stack stack;
void creatingemptystack(stack *s){
    s->top=-1;
}

int isfull(stack *s){
    if(s->top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(stack *s,int newitem){
    if(isfull(s)){
        printf("stack is full");
        exit(1);
    }
    s->top++;
    s->top[s->items]=newitem;
    c++;
}
int pop(stack *s){
    int newitem;
    if(isempty(s)){
        printf("stack is empty");
        exit(1);
    }
    newitem=s->items[s->top];
    s->top=s->top-1;
    c--;
}
int peek(stack *s){
    if(isempty(s)){
        printf("stack is empty");
    }
    printf("%d",s->items[s->top]);
}
void printStack(stack *s) {
  printf("Stack: ");
  for (int i = 0; i < c; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}
int main(){
    stack *s = (stack *)malloc(sizeof(stack));
    creatingemptystack(s);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    printStack(s);
    pop(s);
    printStack(s);
    peek(s);
    
}