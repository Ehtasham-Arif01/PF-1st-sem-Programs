#include<stdio.h>
void fun(int x[])
{
x[3]=100;
return 0;
}
int main(void)
{
int arr[4]={1,2,3,4};

printf("%d\n",arr[0]);
printf("%d\n",arr[1]);
fun(arr);
printf("%d\n",arr[2]);
printf("%d\n",arr[3]);
return 0;
}
