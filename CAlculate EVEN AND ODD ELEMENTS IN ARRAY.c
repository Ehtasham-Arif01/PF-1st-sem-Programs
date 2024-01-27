#include<stdio.h>

int reverse_order(int arr[10])
{
    printf("ARRAY IN REVERSE ORDER :\n");
    for(int i=9;i>=0;i--)
{
    printf("%d ",arr[i]);
}
    printf("\n\n");
}
int even_odd_val(int arr[10])
{
    int a=0;
    int even=0;
    int odd=0;
    for(int i=0;i<=9;i++)
{
    a=arr[i];
    if(a%2==0)
{
    even=even+1;
}
    else
{
    odd=odd+1;
}
}
   printf("EVEN ELEMENTS IN ARRAY ARE : %d\n",even);
    printf("ODD  ELEMENTS IN ARRAY ARE : %d\n",odd);
}

int index_val_2(int arr[10])
{
    int d=0;
    for(int i=0;i<=2;i++)
{
    d=arr[i];
}
    return d;
}
int last_val(int arr[10])
{
    int c=0;
    for(int i=0;i<=9;i++)
{
    c=arr[i];
}
    return c;
}
int min( int arr[10])
{
    int min=arr[0];
    for(int i=1;i<=9;i++)
{
    if(arr[i]<min)
{
    min=arr[i];
}
}
    return min;
}
int max( int arr[10])
{
    int max=arr[0];
    for(int i=1;i<=9;i++)
{
    if(arr[i]>max)
{
    max=arr[i];
}
}
    return max;
}

float cal_avg(int arr[10])
{
    float avg;
    int sum=0;
    for(int i=0;i<=9;i++)
{
    sum=sum+arr[i];
}
    avg=sum/10.0;
    return avg;
}


int main(void)
{
    int arr[10];
    printf("ENTER THE VALUES IN ARRAY :\n");
    for(int i=0;i<=9;i++)
{
    scanf("%d",&arr[i]);
}
    printf("THE MINIMUM VALUE IS : %d\n",min(arr) );
    printf("THE MAXIMUM VALUE IS : %d\n",max(arr) );
    printf("THE AVERAGE IS  :  %f\n",cal_avg(arr) );
    printf("LAST VALUE OF ARRAY IS : %d\n",last_val(arr) );
    printf("THE VALUE OF INDEX 2 IS: %d\n",index_val_2(arr) );
    even_odd_val(arr);
    reverse_order(arr);


    return 0;
}
