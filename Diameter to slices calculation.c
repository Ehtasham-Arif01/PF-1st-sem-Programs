#include<stdio.h>
int dia,slices;
float radius,area;
float const size=14.125;
float const pi=3.1416;
int fun()
{
radius= (dia/2.0);
area=(pi*radius*radius);
slices= (area/size);
return slices;
}
int main()
{
printf(" ENTER THE DIAMETER OF PIZZA = ");
scanf("%d",&dia);
fun();
printf(" slices is %d ",fun() );
return 0;
}


