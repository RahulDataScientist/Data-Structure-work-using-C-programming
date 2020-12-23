//Delete the element from the  given position
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,pos,a[20];
clrscr();
printf("\nenter the no of elements in array");
scanf("%d",&n);
printf("\nenter the element of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the postion to delete the element");
scanf("%d",&pos);
pos=pos-1;
for(i=pos;i<n;i++)
{
a[i]=a[i+1];
}
a[i-1]='\0';
printf("after the delete the element");
for(i=0;i<n-1;i++)
{
printf("\n%d",a[i]);
}
getch();
}
