//Write a program to create a linked list and to display it.
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
struct node *start,*newnode,*fi;
void insert()
{
int data;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the value to be inserted");
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
void main()
{
int i;
clrscr();
while(1)
{
printf("enter the choice");
printf("\n1 for insert");
printf("\n2 for display");
printf("\n3 for exit");
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
exit(0);
break;
}
getch();
}
}