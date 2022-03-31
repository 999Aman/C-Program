#include<stdio.h>
 #include <conio.h>
void main()
{
int a=5;
int *b;
int **c;
int ***d;
clrscr();
b=&a;
c=&b;
d=&c;
printf("A %d \n ",a);
printf("Addr A %d \n ",&a);
printf("B=A %d \n ",b);
printf("Addr B  %d \n ",&b);
printf("c=b %d \n ",c);
printf("Addr C %d \n ",&c);
printf("d=c %d \n ",d);
printf("Addr D %d \n ",&d);

getch();
}