#include <stdio.h>

#define MAX 5
int items[MAX];
int front=-1,rear=-1;

void enqueue(int value){
    if(rear==MAX-1){
        printf("queue is full");
    }
    else {
        if(front==-1){
            front=0;
        }
        rear++;
        items[rear]=value;
        printf("inserted -> %d\n",value);
    }
}
void dequeue(){
    if(front==-1){
        printf("queue is empty");
    }
    else{
        printf("deleted item -> %d\n",items[front]);
        front++;
    }
}
void peek(){
    printf("first:%d\n",items[front]);
}
void display(){
    if(rear==-1){
        printf("queue is empty");
    }
    else{
        for(int i=0;i<=rear;i++){
            printf("%d",items[i]);
        }
    }
    printf("\n");
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    peek();
    dequeue();
    display();
    peek();
}