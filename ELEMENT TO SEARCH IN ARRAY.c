#include<stdio.h>

int main(void)
{
    int a;
    int arr[10]={1,2,3,4,4,5,6,7,8,4};
    printf("ENTER ELEMENT TO SEARCH IN ARRAY\n");
    printf("[1,2,3,4,4,5,6,7,8,4] :");
    scanf("%d",&a);
    int count=0;
    for(int i=0;i<=9;i++)
{
    int c=arr[i];
    if(c==a)
{
    count=count+1;
}
}
    if(count==0)
{
    printf("ELEMENT NOT FOUND\n");
}
    else
{
    printf("ELEMENT %d FOUND %d TIMES\n",a,count);
}

    return 0;
}
