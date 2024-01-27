
#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
    int n,k;
    printf("enter the size :");
    scanf("%d",&n);
    int arr[n];
    
    srand(time(NULL));
    int b =rand()%n;
    arr[0]=b;
    k=b;
    for(int i=0;i<=n-1;i++)
    {
    
    k=k*k;
    printf("INDEX %d : %d \n",i,k);

    }
    
    return 0;//return value
    }
