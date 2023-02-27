/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void enqueue(int data){
    struct node *adde=malloc(sizeof(struct node));
    adde->data=data;
    adde->next=NULL;
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=adde;
}
void dequeue(){
    struct node *temp=head;
    head=head->next;
    free(temp);
}
void display(){
    struct node *temp=head;
    printf("front-> ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("<-rear \n");
}
int main()
{
    
    struct node *one=malloc(sizeof(struct node));
    one->data=1;
    one->next=NULL;
    head=one;
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}
