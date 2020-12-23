//extact substring from givien string
//by Rahul nyati
#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,c,l,w=0;
char *ee;
char ss[78],ssw[78];
clrscr();
printf("enter the string\n");
gets(ee);
while(*ee!='\0')
{
ss[i]=*ee;
i++;
ee++;
}
ss[i]='\0';
puts(ss);
printf("enter the string position start from\n");
scanf("%d",&c);
printf("enter the length\n");
scanf("%d",&l);
i=0;
w=c;
while(ss!='\0' && c<w+l)
{
ssw[i]=ss[c];
i++;
c++;
}
ssw[i]='\0';
printf("after the extract\n");
puts(ssw);

getch();
}