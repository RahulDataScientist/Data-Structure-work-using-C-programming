//Pointer implementation of stacks.
//program of stack using pointer made by Rahul nyati
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
int data;
struct stack *link;
};
 struct stack  *top,*temp;
void push()
{
struct stack *temp;
temp=(struct stack*)malloc(sizeof(struct stack));
printf("enter the element to insert into stack");
scanf("%d",&temp->data);
temp->link=top;
top=temp;
}
void pop()
{
struct stack *temp;
if(top==NULL)
{
printf("\nthe stack is emepty");
}
else
{
temp=top;
printf("\nthe delete the item%d",temp->data);
top=top->link;
temp->link=NULL;
free(temp);
}
}
void display()
{
struct stack *temp;
if(top==NULL)
{
printf("the stack is empty\n");
}
else
{
temp=top;
while(temp!=NULL)
{
printf("\n%d",temp->data);
temp=temp->link;
}
}
}
void main()
{
int i;
clrscr();
while(1)
{
printf("please enter the choice appropriate");
printf("\nenter the 1 for insert" );
printf("\nenter the 2 for delete");
printf("\nenter the 3 for display");
printf("\nenter the 4 for exit\n");

scanf("%d",&i);
switch(i)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
}
}
getch();
}