#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[100],i,rang,max;
  clrscr();
  printf("Enter Range:");
  scanf("%d",&rang);
  printf("\nEnter Element :");
  for(i=0;i<rang;i++)
  {
    scanf("%d",&arr[i]);
  }
  max=arr[0];
  for(i=0;i<rang;i++)
  {
    if(arr[i]>max)
    {
     max=arr[i];
    }
  }
  printf("Maximum Value Element is : %d",max);
  getch();
  }