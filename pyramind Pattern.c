#include<stdio.h>
int main(void)
{
int i,j,k,n;
char c;
printf("ENTER THE NO OF ROWS :");
scanf("%d",&n);
printf("enter character :");
scanf(" %c",&c);
for(i=1;i<=n;i++)
{
for(j=i;j<=n-1;j++)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("%c",c);
}
printf("\n");
}
for(i=n-1;i>=1;i--)
{
for(j=1;j<=n-i;j++)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("%c",c);
}
printf("\n");
}



return 0;
}
