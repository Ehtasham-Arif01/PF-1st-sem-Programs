#include<stdio.h>
int main(void)
{
int m,n;
printf("enter the rows");
scanf("%d",&m);
printf("enter the colums");
scanf("%d",&n);
int arr[m];
int arr1[m][n];
int arr2[m][n];

/*
printf("enter for array   01 ;\n");
for(int i=0;i<=5;i++)
{
scanf("%d",&arr[i]);
}
printf("\nvalues for array 02 :\n");
for(int i=0;i<=5;i++)
{
printf("%d",arr[i]);
}
*/
printf("\n\nenter for array   02 ;\n");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d ",&arr1[i][j]);
}
printf("\n");
}

printf("\n\n");
printf("\nvalues for array 02 :\n");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
printf("%d ",arr1[i][j]);
}
printf("\n");
}
printf("\n");

/*
printf("\n\nenter for array   03 ;\n");
for(int i=0;i<=1;i++)
{
for(int j=0;j<=2;j++)
{
scanf("%d ",&arr2[i][j]);
}
printf("\n");
}

printf("\nvalues for array 03 :\n");
for(int i=0;i<=2;i++)
{
for(int j=0;j<=1;j++)
{
printf("%d ",arr2[i][j]);
}
printf("\n");
}
*/

return 0;
}
