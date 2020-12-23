//Use a recursive function for the towers of Hanoi with three discs.
//tower of hanoi
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
void Tower(int n,char A,char B,char C)
{
if(n>0)
{
Tower(n-1,A,C,B);
printf("%d disc from %c to ->%c\n",n,A,B);
Tower(n-1,B,A,C);
}
}
void main()
{
int n;
clrscr();
printf("ente the no disc");
scanf("%d",&n);
Tower(n,'A','B','C');
getch();
}
