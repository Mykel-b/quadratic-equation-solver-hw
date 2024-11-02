

#include <stdio.h>
#include <math.h>
int main()
{
   float a,b,d;
   float delta;
   float s0,s1,s2;
   printf("enter the value of a:");
   scanf("%f",&a);
   printf("enter the value of b:");
   scanf("%f",&b);
   printf("enter the value of d:");
   scanf("%f",&d);
   delta=b*b-4*a*d;
   if(delta<0)
     {
     printf("there's no solution ");
          
    }  
    else if(delta==0)
     {
         printf("there's one solution: ");
         s0=(-b)/2*a;
         printf("s0=%f",s0);
     }
    else if(delta>0)
     {
        printf("there's two solutions: ");
       s1=(-b-sqrt(delta))/(2*a);
       s2=(-b+sqrt(delta))/(2*a);
       printf("s1=%f s2=%f",s1,s2);
    }
    
    
}