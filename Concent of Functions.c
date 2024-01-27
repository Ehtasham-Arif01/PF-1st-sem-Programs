#include<stdio.h>
int a,b;
int addition(void)
{
int sum;
sum=a+b;
return sum;
}
int subtraction(void)
{
int sub;
sub=a-b;
return sub;
}
int square(int x)
{
x=15;
return x*x;
}
void getvalue()
{
printf(" ENTER VALUE OF A =");
scanf("%d",&a);
printf("ENTER THE VALUE OF B=");
scanf("%d",&b);
}
int main(void)
{
getvalue();
printf("the sum is %d\n",addition() );
printf(" the sub is the %d\n",subtraction() );
printf(" the squrare is the %d\n", square(b) );
return 0;
}
