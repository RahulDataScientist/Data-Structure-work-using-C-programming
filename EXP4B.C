//insert the element in aaray in the begning
//by rahul nyati
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20];
int i,n,j;
clrscr();
printf("\nenter the no of element in array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the element");
scanf("%d",&a[i]);
}
printf("\nenter the element to inserted at the begning\n");
scanf("%d",&j);
for(i=n-1;i>=0;i--)
{
a[i+1]=a[i];
}
a[i+1]=j;
printf("\nafter the insert the value at begning");
for(i=0;i<n+1;i++)
{
printf("\nelement no %d is:%d",i,a[i]);
}
getch();
}
