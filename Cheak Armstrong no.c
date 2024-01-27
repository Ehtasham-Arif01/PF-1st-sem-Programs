#include<stdio.h>
int main(void)
{
int n,c,r;
int arm=0;

for(n=1;n<=1000;n++)
{
r=n%10;
arm=(r*r*r) + arm;
n=n/10;
if(arm==c)
printf(" NO is armstrobng\n");
}

return 0;
}


