#include<stdio.h>
int main(void)
{
int row,col;
char arr[12][4];
for(int i=0;i<12;i++)
{
for(int j=0;j<4;j++)
{
arr[i][j]='0';
}
}
do{
printf("ENTER ROW NO :");
scanf("%d",&row);
printf("ENTER COL NO :");
scanf("%d",&col);
if((row>12 || row<0) || (col>4 || col<0))
{
printf("invalid seat no !\n");
}
else if(row==0 && col ==0)
{
break;
}
else
{
arr[row-1][col-1]='1';
printf("seat reserved successfully!\n");
}
}
while(1>0);
for(int i=0;i<12;i++)
{
for(int j=0;j<4;j++)
{
printf(" %c ",arr[i][j]);
}
printf("\n");
}
return 0;
}
