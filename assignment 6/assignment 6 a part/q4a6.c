#include<stdio.h>
void main()
{
int i,j;
for(j=1;j<=5;j++)
{
for(i=1;i<=6-j;i++)
printf("%c",69-j+i);


printf("\n");
}
}