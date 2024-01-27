// THIS PROGRAM IS FOR 

#include<stdio.h> //header files

float avg_bal(float a,float b,float c,float d,float intr)
{
float k;
k=(a*c-b*d)/c;
return k;
}
float intrest(float a,float b,float c,float d,float intr)
{
float p,t;
p=avg_bal(a,b,c,d,intr);
if(p>10000)
{

t=(1.5*p)*intr;
return t;
}
else
{
t=(0.75*p)*intr;
return t;
}
}
int main (void) //main function 
{
    int a,b,c,d;
    float intr,m,n;
    printf("enter net balance   ");//print statement
    scanf("%d",&a ); //input statement
     printf("enter net payment  ");//print statement
    scanf("%d",&b ); //input statement
     printf("enter d1   ");//print statement
    scanf("%d",&c ); //input statement
     printf("enter d2 ");//print statement
    scanf("%d",&d ); //input statement
     printf("enter inttest rate    ");//print statement
    scanf("%f",&intr ); //input statement
    m=avg_bal(a,b,c,d,intr);
  
    n=intrest(a,b,c,d,intr);
         printf("the  average daily balaance is %f\n",m);
         printf("the   intrest iss  is %f\n" ,n );
    return 0;
    }


