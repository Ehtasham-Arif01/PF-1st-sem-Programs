#include<stdio.h>
int main(void)
{
int i,j;
for(i=1;i<=5;i++)
{
int d=65;
for(j=1;j<=i;j++)
{
if(i%2!=0)
{
printf("%d",j);
}
else
{
printf("%c",d);
d++;
}
}
printf("\n");
}
return 0;
}
