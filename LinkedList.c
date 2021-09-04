#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head;
void display();
int main()
{
    int i=1;
    struct node *newnode,*temp;

    while(i)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);

        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
            head->next=temp->next;
        }
        else
        {
            temp=newnode;
            temp=temp->next;
            temp=NULL;
        }

        printf("wants to enter again");
        scanf("%d",&i);
    }
    display();
    return 0;

}
void display()
{

    struct node*temp;
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

}
