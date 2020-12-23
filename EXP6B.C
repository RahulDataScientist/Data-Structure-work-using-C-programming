//insertion sort
//Write a program to sort N numbers using insertion sort.
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,a[20],temp;
clrscr();
printf("enter the no of element in list\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i;
while(j>0 && a[j-1]>temp)
{
a[j]=a[j-1];
a[j-1]=temp;
j=j-1;
}
}
printf("\nafter the insertion sort ");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
getch();
}