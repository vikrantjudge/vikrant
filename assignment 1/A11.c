#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);

    if((a>b && a<c)  || (a>c && a<b) )
        printf("Middle number is %d",a);
    else if((b>a && b<c)  || (b>c && b<a))
        printf("Middle number is %d",b);
        else if((c>b && c<a)  || (c>a && c<b))
        printf("Middle number is %d",c);
}
