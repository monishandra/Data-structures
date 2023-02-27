#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void push(int data){
    struct node *addp=malloc(sizeof(struct node));
    addp->data=data;
    addp->next=head;
    head=addp;
}
void pop(){
    struct node *temp=head;
    head=head->next;
    free(temp);
}
void display(){
    struct node *temp=head;
    printf("top-> ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("<-bottom \n");
}
int main()
{
    
    struct node *one=malloc(sizeof(struct node));
    one->data=1;
    one->next=NULL;
    head=one;
    push(2);
    push(3);
    pop();
    display();
    return 0;
}
