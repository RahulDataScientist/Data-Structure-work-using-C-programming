//Experiment no 1 GCD of two no
//Rahul nyati
#include<stdio.h>
#include<conio.h>
int GCD(int n1, int n2)
{
if(n2!=0)
{
return GCD(n2,n1%n2);

}
else
{
return n1;
}
}
void main()
{
int n,n1,n2;
clrscr();
printf("enter the first no");
scanf("%d",&n1);
printf("enter the second no");
scanf("%d",&n2);
printf("the GCD OF %d and %d is",n1,n2);
n=GCD(n1,n2);
printf("%d",n);
getch();
}
