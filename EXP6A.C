//bubble sort
//by rahul nyati
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,temp,a[20];
clrscr();
printf("enter the no element in list\n");
scanf("%d",&n);
printf("\enter the element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n after the bubble sort");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
getch();
}
