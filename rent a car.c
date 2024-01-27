#include<stdio.h>
int cal_bill(int d,char c)
{
int m=10;
int ca=20;
int b=30;
if(c=='m')
{
int bill;
bill=m*d;
return bill;
}
if(c=='c')
{
int bill;
bill=ca*d;
return bill;
}
if(c=='b')
{
int bill;
bill=b*d;
return bill;
}
}
int main(void)
{
char c;
int d;

printf("M- motersccle\n");
printf("C- car\n");
printf("B- bus\n");
scanf(" %c",&c);
printf("no of days\n");
scanf("%d",&d);
int k=cal_bill(d,c);
printf("%d\n",k);
return 0;
}

