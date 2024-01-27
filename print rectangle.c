#include<stdio.h>
int main(void)
{

for(int i=1;i<=4;i++)
{
for(int j=1;j<=6;j++)
{
if(i==1||j==1||i==4 ||j==6)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
