#include<stdio.h>
void main()
{
 int age;
 //clrscr();
 printf("Enter Age :");
 scanf("%d",&age);
 if(age>=18 && age<100)
 {
  printf("Eligible For Vote ");
 }
 else if(age<18 && age>0)
 {
  printf("Not Eligible For Vote ");
 }
 else
 {
  printf("Invalid Age !");
 }


}