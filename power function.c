#include<stdio.h>
#include<math.h>

double fun(long long k)
{
if(k<=999)
{
return pow(k,5);
}
if(k>999)
{
return pow(k,5);
}
}


int main (void)
{
long long a,o;
printf("enter digit ");
scanf("%e",&a);
o=fun(a);
printf("te is ddnnn %e\n",o);
return 0;
}


