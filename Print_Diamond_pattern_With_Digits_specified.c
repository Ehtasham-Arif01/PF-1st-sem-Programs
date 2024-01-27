#include<stdio.h>
int main(void)
{
int i,j,k,n;
printf("enetr lines:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=i;j<=n-1;j++)
{
printf(" ");
}
for(k=0;k<=i;k++)
{
printf("%d ",i);
}
printf("\n");
}
for(i=n-1;i>=0;i--)
{
for(j=1;j<=n-i;j++)
{
printf(" ");
}
for(k=0;k<=i;k++)
{
printf("%d ",i);
}
printf("\n");
}


        
return 0;
}
