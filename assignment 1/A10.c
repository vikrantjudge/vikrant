#include<stdio.h>
int main()
{
    int a;
    printf("Enter your digit : ");
    scanf("%d",&a);
    printf("after erasing second last digit : %d" ,((a/100)*100) + ((a%10)*10) + ((a/10)%10));
}


