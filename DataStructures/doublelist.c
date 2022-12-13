#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *add_beg(struct node **head,int data){
    struct node *addb=malloc(sizeof(struct node));
    addb->data=data;
    addb->next=(*head);
    addb->prev=NULL;
    (*head)->prev = addb;
    (*head)=addb;
}
struct node *add_end(struct node **head,int data){
    struct node *adde=malloc(sizeof(struct node));
    adde->data=data;
    adde->next=NULL;
    struct node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = adde;
    adde->prev = temp;
}
struct node *add_pos(struct node **head,int data,int position){
    struct node *addp=malloc(sizeof(struct node));
    addp->data=data;
    struct node *temp=*head;
    for(int i=2;i<position;i++){
        if(temp->next!=0){
            temp=temp->next;
        }
    }
    addp->next=temp->next;
    temp->next=addp;
}
struct node *del_beg(struct node **head){
    struct node *temp=*head;
    *head=(*head)->next;
    free(temp);
    return *head;
}
struct node *del_end(struct node **head){
    struct node *temp=*head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    return *head;
}
void printlist(struct node* node){
    while(node!=NULL){
        printf("%d->",node->data);
        node = node->next;
    }
    if(node==NULL){
        printf("NULL");
    }
}

int main(){
    struct node *head;
    struct node *one=malloc(sizeof(struct node));
    one->data=3;
    one->next=NULL;
    one->prev=NULL;
    head=one;
    struct node *temp=head;
    temp=add_beg(&head,2);
    temp=add_beg(&head,1);
    temp=add_end(&head,4);
    temp=add_pos(&head,5,2);
    temp=del_beg(&head);
    temp=del_end(&head);
    temp=head;
    printlist(head);
}