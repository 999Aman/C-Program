

#include<stdio.h>
#include <conio.h>
#define fact 15
void main(){
int x=0;
clrscr();

#if fact==1

x=12;

printf("%d",x);
#else
printf("hi");
scanf("%d",&x);
printf("%d",x);
#endif
getch();
}
