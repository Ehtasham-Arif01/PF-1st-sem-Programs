#include<stdio.h>
int main(void)
{
int i,j,k;
for(i=5;i>=0;i--);
{
for(j=0;j<5-i;j++)
{
printf("k");
}
for(k=0;k<2*i-1;k++)
{
printf("%d",i);
}
printf("\n");
}
return 0;
}
