#include<stdio.h>
#include<math.h>
void main()
{
    int a;
    printf("even numbers between 20 to 70 are :- ");
    for(a=20;a<=70;a++)
    {
        if(a%2==0)
            printf("\n%d",a);
    }

}
