#include<stdio.h>
#include<stdbool.h>
int main(void)
{
int i;
int count=0;
int k;
int arr[10]={1,2,3,4,6,7,8,9,2,1};

for(i=0;i<=9;i++)
{
count=0;
for(int j=i+1;j<=9;j++)
{
if(arr[i]==arr[j])
count=count+1;
k=count;
}
if(flag==false)
printf(" heelo %d\n",arr[i]);
break;
}
return 0;
}
