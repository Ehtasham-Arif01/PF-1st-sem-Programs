#include<stdio.h>
int main(void)
{
int arr[]={5,2,7,1,0};
for(int i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)
{
if(arr[j]<arr[i])
{
int temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
}
}
}
for(int i=0;i<5;i++)
{
printf("%d, ",arr[i]);
}
}
