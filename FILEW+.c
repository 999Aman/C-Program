#include<stdio.h>
#include<string.h>

void main()
{char r;
 char c[20];
 int i;

 FILE*p;
 p=fopen("Anu.txt","w+");
 gets(c);
 fprintf(p,"%s",c);
 for(int i=0;i<strlen(c);i++)
{
    fgets(c,10,p);
  
}  printf("%s",c);
 fclose(p);

}