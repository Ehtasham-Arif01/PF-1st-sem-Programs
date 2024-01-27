#include<stdio.h>

int main(void)
{
int a;
int arr[25];
int i;
printf("ENTER THE VALUE OF ARRAY :");
for(i=0;i<=24;i++)
{
scanf("%d",&arr[i]);
if(arr[i]<10 || arr[i]>100)
{
i--;
printf("invalid\n");
continue;
}
for(int j=0;j<=24;j++)
{
a=arr[j];
for(int k=1;k<=arr[i];k++)
{
if(a==arr[(i+1)])
printf("duplicate\n");
k--;
}
continue;
}
printf("VALUE ENTERED ARE :%d\n",arr[i]);
}

return 0;
}


