#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *add_beg(struct node** head,int data){
    struct node *addb=malloc(sizeof(struct node));
    addb->data=data;
    addb->next=*head;
    *head=addb;
}

struct node *add_end(struct node** head,int data){
    struct node *adde=malloc(sizeof(struct node));
    adde->data=data;
    adde->next=NULL;
    struct node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=adde;
}

struct node *add_pos(struct node** head, int data,int position){
    struct node *addp=malloc(sizeof(struct node));
    addp->data=data;
    struct node *temp=*head;
    for(int i=1;i<position;i++){
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

struct node *del_pos(struct node **head,int position){
    struct node *temp=*head;
    for(int i=2;i<position;i++){
        if(temp->next!=NULL){
            temp=temp->next;
        }
    }
    temp->next=temp->next->next;
}
int searchnode(struct node **head,int key){
    struct node *current= *head;
    while(current!=NULL){
        if(current->data==key){
            return 1;
        }
        current = current->next;
    }
    return 0;
}
void printList(struct node* node) {
  while (node != NULL) {
  printf("%d ", node->data);
  node = node->next;
  }
}
int main(){
    struct node *head;
    struct node *one=(struct node*)malloc(sizeof(struct node));
    one->data=2;
    one->next=NULL;
    head=one;
    struct node *temp=head;
    temp=add_beg(&head,1);
    temp=add_beg(&head,2);
    printf("after adding at begining:");
    printList(head);
    temp=add_end(&head,4);
    printf("\nafter adding at end:");
    printList(head);
    temp=add_pos(&head,3,2);
    printf("\nafter adding at position 2:");
    printList(head);
    head=del_beg(&head);
    printf("\ndeleting at beg:");
    printList(head);
    head=del_end(&head);
    printf("\ndeleting at end:");
    printList(head);
    head=del_pos(&head,2);
    printf("\ndeleting at position 2:");
    printList(head);
    int key=2;
    temp=head;
    printList(head);
    if(searchnode(&head,key)){
        printf("\n%d has found\n",key);
    }
    
}