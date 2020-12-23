//Fibonacci series using recursion
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
int Fibo(int n)
{

if(n==1 || n==0)
return n;
else
return Fibo(n-1)+Fibo(n-2);
}
void main()
{
int w,i;
clrscr();
printf("enter the no ");
scanf("%d",&w);
for(i=0;i<w;i++)
{
printf("%d\t",Fibo(i));
}
getch();
}
