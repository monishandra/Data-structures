#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int items[MAX];
int rear=-1;
int front =-1;
void enqueue(int value){
    if(rear==MAX-1){
        printf("queue is full\n");
        //exit(1);
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        items[rear]=value;
    }
}
void dequeue(){
    if(front==-1){
        printf("queue is empty\n");
        //exit(1);
    }
    else{
        // printf("Deleted element is %d\n",items[front]);
        // for(int i=0;i<MAX;i++)
        // {
        //     items[i]=items[i+1];
        // }
        // rear--;
        front++;
    }
}
void printedqueue(){
    if(rear==-1){
        printf("queue is empty");
    }
    for(int i=front;i<=rear;i++){
        printf("%d ",items[i]);
    }
    printf("\n");
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    printedqueue();
    dequeue();
    printedqueue();

    return 0;
}