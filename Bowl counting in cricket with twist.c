#include<stdio.h>
int main(void)
{
int bol;
scanf("%d",&bol);
float a=bol/6;
float b=bol%6;
float d=b*0.1;
float c=a+d;
printf("%.1f\n",c);

return 0;
}

