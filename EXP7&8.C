//Inserting a node into a singly linked list.
// Deleting a node from a singly linked list.
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
struct node *ptr,*preptr,*newnode,*start,*fi;
void insert()
{
int data;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the value to inserted into linked list");
scanf("%d",&data);
newnode->info=data;
newnode->next=start;
start=newnode;
}
void display()
{
fi=start;
while(fi!=NULL)
{
printf("%d->",fi->info);
fi=fi->next;
}
}
void del()
{
int item;
printf("enter the data to be deleted from linked list");
scanf("%d",&item);
ptr=start;
preptr=start;
while(ptr!=NULL)
{
if(ptr->info==item)
{
break;
}
else
{
preptr=ptr;
ptr=ptr->next;
}
}
if(ptr==NULL)
{
printf("item not found");
}
else
if(ptr==start)
{
start=start->next;
}
else
{
preptr->next=ptr->next;
}
}
void main()
{
int i;
clrscr();
while(1)
{
printf("\nenter your choice");
printf("\nenter 1 for:insert");
printf("\nenter 2 for:display");
printf("\nenter 3 for:delete");
printf("\nenter 4 for:exit\n");
scanf("%d",&i);
switch(i)
{
case 1:
insert();
break;
case 2:
display();
break;
case 3:
del();
break;
case 4:
exit(0);
}
getch();
}
}