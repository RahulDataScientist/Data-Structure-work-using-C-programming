//insert the element in end of the array
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],n,c,i;
clrscr();
printf("enter the no of elemnet in array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d\n",&a[i]);
}
printf("element of array");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("enter the element to insert in the end\n");
scanf("%d",&c);
a[i+1]=c;
printf("after the insert the element at the end\n");
for(i=0;i<n+1;i++)
{
printf("%d\n",a[i]);
}
getch();
}
