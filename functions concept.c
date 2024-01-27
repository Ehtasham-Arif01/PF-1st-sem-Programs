#include <stdio.h>
int x,y;
void addition()
{
printf(" sum is %d\n",x+y);
}
void subtraction()
{
printf(" sub is %d\n",x-y);
}
void squre(int x)
{
return x*x;
}
int main()
{ 
printf("ENTER FIRST NO ==");
scanf("%d",&x);
printf("ENTER SEC NO == ");
scanf("%d",&y);
subtraction();
addition();

printf("value of squre is %d\n",squre(x));
printf("****************\n****|n*****\n***\n**\n*");
return 0;
}
