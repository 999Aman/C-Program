#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[100],i,rang,min;
  clrscr();
  printf("Enter Range:");
  scanf("%d",&rang);
  printf("\nEnter Element :");
  for(i=0;i<rang;i++)
  {
    scanf("%d",&arr[i]);
  }
  min=arr[0];
  for(i=0;i<rang;i++)
  {
    if(min>arr[i])
    {
     min=arr[i];
    }
  }
  printf("Minimum Value Element is : %d",min);
  getch();
  }