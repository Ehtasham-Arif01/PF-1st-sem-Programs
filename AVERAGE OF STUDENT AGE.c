#include<stdio.h>
float cal_avg(int ages[4])
{
int i,sum;
float avg;
for(i=0;i<=3;i++)
{
sum=sum+ages[i];
}
avg=sum/4.0;
return avg;

}
int main(void)
{

int ages[4];
for(i=0;i<=3;i++)
{
scanf("%d",&ages[i]);
}


printf("AVERAGE OF STUDNT AGE IS : %f\n",cal_avg(ages));
return 0;
}
