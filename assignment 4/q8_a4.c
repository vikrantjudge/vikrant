#include<stdio.h>
int main()
{
int i,n;
printf("enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if(((i%3==0)||(i%5==0))&&(i%15!=0))
        printf("\n%d",i);
}
}


