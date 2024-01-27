#include<stdio.h>
int hal(int sal)
{
int a;
a= sal* 0.10;
return a;
}
int tal(int sal)
{
int b;
b=(sal*0.10)*0.50;
return b;
}
int sec(int sal)
{
if (sal<15000)
{
int k;
k=2000;
return k;
}
if (sal>=15000)
{
int m;
m= 5000;
return m;
}
}
int net(int sal)
{
int total;
total=sal+tal(sal)+hal(sal)-sec(sal);
return total;
}



int main(void)
{
int sal;
printf("WELCOME TO THE EMPLOYEE PAYROLL SYSTEM \n");

printf("ENTER THE BASIC SALARY OF EMPLOYEE = ");
scanf("%d",&sal);
printf("EMPLOYEE DETAILS :\n  ");

printf("BASIC SALARY IS  : %d Rs\n", sal);
printf("HOUSING ALLOWINCE: %d Rs\n", hal(sal));
printf("TRANSPORT ALLONCE: %d Rs\n", tal(sal));
printf("SECURITY  ALLONCE: %d Rs\n", sec(sal));
printf("NET SALARY IS   : %d Rs\n",net(sal) );
return 0;
}
