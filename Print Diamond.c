#include<stdio.h>
int main(void)
{
int row,space,colum;
for(row=1; row<=5;row++)
{
for(space=1;space<=5-row;space++)
{
printf(" ");
}
for(colum=1;colum<=2*row-1;colum++)
{
printf("*");
}
printf("\n");
}
for(int row=4;row>=1;row--)
{

for(space=1;space<=5-row;space++)
{
printf(" ");
}
for(colum=1;colum<=2*row-1;colum++)
{
printf("*");
}
printf("\n");
}
return 0;
}




