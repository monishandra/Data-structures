#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = 0;
void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void insert(int data)
{
    struct node *temp, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = 0;
    if (head == 0)
    {
        temp = head = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}
int checkDuplicates()
{
    struct node *newnode;
    struct node *temp = head;
    struct node *dup = head;
    int count = 0;
    int count1=0;
    int d = 0;
    int num=0;
    while (temp->next != 0)
    {
        struct node *dup = head;
        while (dup != 0)
        {
            if (temp->data ==dup->data)
            {
                count++;
            }
            dup = dup->next;
        }
        if(count>count1){
            count1=count;
            num=temp->data;
        }
        count=0;
        temp = temp->next;
    }
    printf("%d- %d times\n", num, count1);
}
int main()
{
    insert(1);
    insert(1);
    insert(2);
    insert(1);
    insert(2);
    insert(2);
    insert(1);
    insert(2);
    insert(2);
    display();
    printf("\n");
    checkDuplicates();
}