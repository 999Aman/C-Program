#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 int *p=&a;
 clrscr();
 printf("Enter Number :");
 scanf("%d",&a);
 printf("Enter Value to Replace : ");
 scanf("%d",&b);
 printf("Value Before : %d\n",a);
 *p=b;
 printf("Value After Replace : %d",a);
 getch();
}