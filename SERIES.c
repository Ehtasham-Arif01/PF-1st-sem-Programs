#include<stdio.h>
int fun()
{
int sum,n,d,a;
n=10;
d=2;
a=2;
sum=(n/2)*(2*a+(n-1)*d);
return sum;

}

int main (void)
{
printf("THE SUM OF SERIES IS = %d\n", fun() );




return 0;
}

