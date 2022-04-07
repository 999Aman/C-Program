#include<stdio.h>
#include<conio.h>
void arr(int a[],int size)
{
    int  b[100],i,c;
    for(i=0;i<size;i++)
    {
     b[i]=a[i]*a[i];

    }
    printf("\nArray B( Square of Elements) :");
    for(i=0;i<size;i++)
    {
     printf("%d ",b[i]);
    }

}
void main()
{
 int a[100],b[100],size,i;
 clrscr();
 printf("Enter Size :");
 scanf("%d",&size);
 printf("Enter Elements of Array :\n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Array A : ");
  for(i=0;i<size;i++)
 {
  printf("%d ",a[i]);
 }
 arr(a,size);
 getch();
}