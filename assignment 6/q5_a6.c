#include<stdio.h>
void main()
{
int i,j;
for(j=1;j<=4;j++)
{
for(i=1;i<=5-j;i++)
{
printf("%c",j+64);
}
}
}