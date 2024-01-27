#include<stdio.h>
int main(void)
{
int i,j,k;
int a=5;
for(i=1;i<=6;i++)
{
for(j=1;j<=i-1;j++)
{
printf(" ");
}
for(k=1;k<=5*2-i;k++)
{
printf("%d",a);

}
a--;
printf("\n");

}

return 0;
}
