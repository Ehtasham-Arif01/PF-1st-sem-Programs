#include<stdio.h>

int main(void)
{
int i,n,k,m;
printf("ENTER THE TABLE NO YOU WANT :");
scanf("%d",&i);
printf("ENTER THE STARTING NO YOU WANT :");
scanf("%d",&k);
printf("ENTER THE ENDING NO YOU WANT :");
scanf("%d",&n);
for(m=k;m<=n;m++)
{
printf("%d x %d = %d\n",i,m,m*i);
}
return 0;
}

