#include<stdio.h>
int main(void)
{
int row,colum,i,j;
printf("ENTER THE NO OF ROWS :");
scanf("%d",&row);
for(colum=1;colum<=row; colum++)
{
for(i=1;i<=row;i++)
{
printf("#");
}
printf("\n");
}
return 0;
}
