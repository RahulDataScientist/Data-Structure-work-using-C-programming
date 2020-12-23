//String 
//2. Use pointers to  concatenate two strings.
//by Rahul Nyati
#include<stdio.h>
#include<conio.h>
void main()
{
int i=0;
char *st1,*st2;
char ss[20];
clrscr();
printf("enter the first string");
gets(st1);
printf("ente the second string");
gets(st2);
while(*st1!='\0')
{
ss[i]=*st1;
st1++;
i++;
}
while(*st2!='\0')
{
ss[i]=*st2;
st2++;
i++;
}
ss[i]='\0';
puts(ss);
getch();
}


