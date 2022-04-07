#include<stdio.h>
#include<conio.h>
void main()
{
int a=50,b=60;
int *p=&a,*q=&b;
int **r=&p,**s=&q;
int ***t=&r,***u=&s;
clrscr();
printf("Address of A : %d\n",p);
printf("Address of B : %d\n",q);
printf("Value of A : %d\n",*p);
printf("Value of B : %d\n",*q);
printf("Address of A : %d\n",*r);
printf("Address of B : %d\n",*s);
printf("Value of A : %d\n",**r);
printf("Value of B : %d\n",**s);
printf("Address of A : %d\n",**t);
printf("Valu of A : %d\n",***t);
printf("Address of B : %d\n",**u);
printf("Value of B : %d\n",***u);
getch();
}