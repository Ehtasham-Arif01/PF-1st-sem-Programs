#include<stdio.h>

int fun(int size,int arr[size])
{
  int count=0;
  int max=arr[0];
for(int i=0;i<=size;i++)
{  
printf("Array :"); 
scanf("%d",&arr[i]);
if(max<arr[i])
{
max=arr[i];
count=i;
}

}
return count;
}


int main(void)
{
  int size=8;
  int arr[size];
  
  printf("the last occurance of largest element is at index %d\n",fun(size,arr));

    return 0;
}
