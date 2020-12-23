//selection sort
//Write a program to sort N numbers using selection sort.
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,min,n,temp,a[30];
clrscr();
printf("enter the no element in list\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
min=i;
if(a[j]<a[min])
{
min=j;
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("\nafter the selection sort");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
getch();
}
