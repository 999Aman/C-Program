#include<stdio.h>
#include<conio.h>
void main()
{
 int num,temp,result=0,rem;
 clrscr();
 printf("Enter Number:");
 scanf("%d",&num);
 temp=num;
 while(temp>0)
 {
   rem=temp%10;
   result=result + rem*rem*rem;
   temp=temp/10;
 }
 if(num==result)
 {
  printf("Number %d is Armstrong",num);
 }
 else
 {
  printf("Number %d is not Armstrong!",num);
 }
 getch();
}