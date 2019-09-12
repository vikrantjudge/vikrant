#include<stdio.h>
#include<math.h>
void main()
{
    int a;
    for(a=20;a<=80;a++)
    {
        if(a<=40)
            printf("\n%d",a);

           if(a>49&&a<51)
           printf("\n even no between 50 to 80 are :-");
         if(a>=50&&a%2==0)
            printf("\n%d",a);
    }


}
