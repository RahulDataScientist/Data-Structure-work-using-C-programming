//Pointer implementation of queues.
//opertion on normal queue
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct queue
{
int info;
struct queue *node;
}*ptr,*front,*newnode,*rear;
void insert(int item);
void del();
void display();
int underflow();
void menu();
void main()
{
clrscr();
menu();
}
void menu()
{
int item,i;
printf("enter the choice\n");
printf("\nenter no :1 for insert into queue");
printf("\nenter no :2 for delete the item from queue");
printf("\nenter no :3 for display the data of queue");
printf("\nenter no :4 for exit");
scanf("%d",&i);
switch(i)
{
case 1:
printf("insert the element in queue" );
scanf("%d",&item);
insert(item);
display();
getch();
clrscr();
menu();
break;
case 2:
printf("delete the element from queue");
if(underflow()==1)
{
del();
if(underflow()==1)
{
printf("after the element the element");
display();
}
}
getch();
clrscr();
menu();
break;
case 3:
if(underflow()==1)
{
display();
}
else
{
printf("no element in queque");
}
getch();
clrscr();
menu();
break;
case 4:
exit(1);
break;
default :
printf("you enter the wrong choice please enter write choice");
menu();
break;
}
}
int underflow()
{
if((front==NULL) && (rear==NULL))
{
printf("\nthe queue is empty");
return(0);
}
else
{
return(1);
}
}
void insert(int item)
{
newnode=(struct queue*)malloc(sizeof(struct queue));
newnode->info=item;
if((front==NULL) && (rear==NULL))
{
front=newnode;
rear=newnode;
newnode->node=NULL;
}
else
{
rear->node=newnode;
newnode->node=NULL;
rear=newnode;
}
}
void del()
{
if(front==rear)
{
front=NULL;
rear=NULL;
}

else
{
front=front->node;
}
}
void display()
{
int i;
ptr=front;
i=1;
while(ptr!=NULL)
{
printf("\nnode %d:%d",i,ptr->info);
ptr=ptr->node;
i++;
}


}