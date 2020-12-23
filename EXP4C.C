//array program to insert the value at given position
//Rahul nyati
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,pos,posval;
int a[20];
clrscr();
printf("\nenter the no of element in array");
scanf("%d",&n);
printf("\n enter the elements in array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nenter the postion to insert the value of array");
scanf("%d",&pos);
printf("\nenter the value of element of to insert at the given position");
scanf("%d",&posval);
pos=pos-1;
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=posval;
printf("\n after the insert the value at given postion");
for(i=0;i<n+1;i++)
{
printf("\n%d",a[i]);
}
getch();
}
