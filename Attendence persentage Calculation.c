#include<stdio.h>
float cal_at(int class,int att)
{
float d;
d=(att/class)*100;

return d;
}
int main(void)
{
float class,att,a;
printf("ENTER THE SHEHDULED CLSSES : ");
scanf("%f",&class);
printf("ENTER THE CLASSES ATTENDED : ");
scanf("%f",&att);
a=cal_at(class,att);
printf("YOUR ATTENDENCE IS %f\n", a);
if(a>=80)
{
printf("you are allowed to sit in exam\n");
}
else
{
printf("you are not allowed to sit in exam\n");
}

return 0;
}
