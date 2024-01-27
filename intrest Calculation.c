#include<stdio.h>
int simple(int bal)
{
return bal*0.05;
}
int com(int bal)
{
return bal*0.12;
}
int com2(intx, int y,int z)
{
printf("enter the ballance =");
scanf("%d\n",&z);
printf("enter the intrest rate  =");
scanf("%d\n",&x );
printf("enter the no of years =");
scanf("%d\n",&y );
return x*(1+(z/100.0))*y-x;
}
int main(int bal,int intrest,int years)
{
printf("ENTER THE CUSTOMER SAVING ACCOUNT BALANCE =");
scanf( "%d\n",&bal);
printf("THE SIMPLE INTREST IS = %d\n rupees",simple(bal));
printf("THE COMPOUND INTREST IS = %d\n rupees",com(bal));
int c=com2(bal,intrest,years);
printf("THE COMOUND COMPLEX INTEERST IS  = %d\n rupees",c);
return 0;
}


