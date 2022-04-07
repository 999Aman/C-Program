#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100][100],i,j,arr2[100][100],row,col;
 clrscr();
 printf("Enter No. of Row & Column:\n");
 scanf("%d%d",&row,&col);
 printf("Enter %d*%d Array A:\n",row,col);
 for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
      {
	scanf("%d",&arr[i][j]);
      }
  }
 printf("2D Array A:\n\n");
 for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
      {
	printf("%d  ",arr[i][j]);
      }
     printf("\n");
  }
   for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
      {
	arr2[i][j]=arr[i][j];
      }
  }
 printf("2D Array B:\n\n");
 for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
      {
	printf("%d  ",arr2[i][j]);
      }
     printf("\n");
  }
getch();
}