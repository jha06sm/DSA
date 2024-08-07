#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node * insertatbeg(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct node * insertatbet(struct node *head,int data,int index)
{
     struct node *ptr=(struct node *)malloc(sizeof(struct node));
     struct node *p=head;
     int i=0;
     while (i!=index-1)
     {
        p=p->next;
        i++;
     }
     ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
     return head;
}

struct node * insertatend(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    struct node *p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head=(struct node *)malloc(sizeof(struct node));
     second=(struct node *)malloc(sizeof(struct node));
      third=(struct node *)malloc(sizeof(struct node));
    
    head->data=7;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=11;
    third->next=NULL;

    traversal(head);
   // head=insertatbeg(head,2);
   // traversal(head);
    //head=insertatbet(head,51,2);
    head=insertatend(head,51);
    traversal(head);
    return 0;
}