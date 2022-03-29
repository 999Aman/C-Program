#include<stdio.h>
#include<conio.h>
int fact(int a)
{
if(a==0||a==1)
return 1;

else
return a*fact(a-1);
}
void main (){
int c ,x;
clrscr();
printf("enter a number");
scanf("%d :",&x);
c=fact(x);
//or
//c=fact(5);
printf("%d ",c);
getch();
}