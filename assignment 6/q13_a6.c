#include<stdio.h>
int main()
{
int i,j;
for(j=1;j<=5;j++)
{
for(i=1;i<=j;i++)
printf("%c",96+i);
for(i=1;i<=6-j;i++)
printf("%c",64+j+i);
printf("\n");

}

}