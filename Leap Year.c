#include<stdio.h>

int main(void)
{
int d,m,y;
printf("enter day no:\n");
scanf("%d",&d);
printf("enter month no:\n");
scanf("%d",&m);
printf("enter year no:\n");
scanf("%d",&y);
int total;
int jan=31;
int feb=28;
if((y%4==0 && y% 100!=0) || y%400==0)
{
feb=29;
}
if(m==1)
{

total=d;
}
if(m==2)
{
total=jan+d;
}
if(m==3)
{
total=jan+feb+d;
}
printf("the total dys are %d\n",total);
return 0;
}
