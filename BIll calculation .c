// THIS PROGRAM IS FOR 

#include<stdio.h> //header files

float fun1(float hour)
{
float income;
income= 5*(hour*15.50);
return income;
}
float inc_tax(float hour)
{
float b,c;
b=fun1(hour);
c=b-(b*0.14);
return c;
}
int clo(float hour)
{
float a,s;
a=inc_tax(hour);
s=(a*0.10);
return s;
}
int sch(float hour)
{
float w,q;
q=inc_tax(hour);
w=(q*0.01);
return w;
}
float bond(int hour)
{
float a,s;
a=inc_tax(hour)-(sch(hour)+clo(hour) );
s=(a*0.25);
return s;
}
float a_bond(int hour)
{
float z,x;
z=bond(hour);
x=z*0.50;
return x;
}



int main (void) //main function 
{
    float hour,a,k,u,o,r,p;
    
    printf("ENTER THE NO OF HOURS WORKED ");//print statement
    scanf("%f",&hour); //input statement
    a=fun1(hour);
    printf("the incomr before taxes is %f\n",a);
    k=inc_tax(hour);
    printf("the incomr after taxes is %f\n",k);
    u=clo(hour);
    printf("themoney spent on clothes ND Assesries  %f\n",u);
    o=sch(hour);
    printf("themoney spent on school sipplies  %f\n",o);
    r=bond(hour);
    printf("themoney spent on saving bonds  %f\n",r);
    p=a_bond(hour);
    printf("the monery parents buy bods  %f\n",p);
    return 0;
    }


