#include<stdio.h>
int main(void)
{
int arr[4][2];
for(int i=0;i<=1;i++)
{
for(int j=0;j<=3;j++)
{
scanf("%d",&arr[i][j]);
}
printf("\n");
}
for(int i=0;i<=1;i++)
{
for(int j=0;j<=3;j++)
{
printf("%d",arr[i][j]);
}
printf("\n");
}
return 0;
}
