#include <stdio.h>
void sum(int b[], int n, int tar) {
for(int i=0;i<n-1;i++) 
{
for(int j=i+1;j<n;j++)
{
if(b[i]+b[j]==tar)
{
printf("VALUES %d : %d \n",i,j);
return;
}
}
}
printf("No such pair found for the target.\n");
}
int main()
{
int n;
printf("Enter the size of the array: ");
if (scanf("%d", &n) != 1 || n <= 0) 
{
printf("Invalid n entered. Exiting.\n");
return 1;
}
int b[n];   
printf("Enter %d values separated by space: ", n);
for(int i=0;i<n;i++)
{
if(scanf("%d",&b[i])!=1)
{
printf("PLEASE INPUT VALID VALUE %d\n",i);
return 1;
}
}
int tar;
printf("Enter the target sum: ");
if(scanf("%d", &tar)!=1)
{
printf("PLEASE INPUT VALID VALUE\n");
return 1; 
}
sum(b,n,tar);
return 0;
}

