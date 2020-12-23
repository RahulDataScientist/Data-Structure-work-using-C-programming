//length of string
// Use pointers to find the length of a string
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
int length(char *a)
{
int i=0;
while(*a!='\0')
{
i++;
a++;
}
return i;
}
void main()
{
int c;
char *s;
char ss[20];
printf("enter the string you want to find the length\n");
gets(ss);
s=ss;
c=length(s);
printf("length of string is%d",c);
getch();
}
