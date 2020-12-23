//Sort N numbers using merge sort.
//merge sort
// by Rahul nyati
#include<stdio.h>
#include<conio.h>
#include<process.h>
void partion(int *,int start,int end);
void merge(int *,int lower1,int upper1,int lower2,int upper2);
void main()
{
int n,i;
int *a;
clrscr();
printf("enter the no fo element");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
partion(a,0,n-1);
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}
void partion(int *a,int start,int end)
{
int mid;
if(end>start)
{
mid=(start+end)/2;
partion(a,start,mid);
partion(a,mid+1,end);
merge(a,start,mid,mid+1,end);
}
}
void merge(int *a,int lower1,int upper1,int lower2,int upper2)
{
int b[50],x=0,i,l=lower1;
while((lower1<=upper1) && (lower2<=upper2))
{
if(a[lower1]<a[lower2])
{
b[x]=a[lower1];
x++;
lower1++;
}
else
{
b[x]=a[lower2];
x++;
lower2++;
}
}
while(lower1<=upper1)
{
b[x]=a[lower1];
x++;
lower1++;
}
while(lower2<=upper2)
{
b[x]=a[lower2];
x++;
lower2++;
}
x=0;
for(i=l;i<=upper2;i++)
{
a[i]=b[x];
x++;
}
}