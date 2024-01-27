#include<stdio.h>
int info(int fee)
{
fee=150;
printf("classic fitness jym\n");
printf("near ckawal road talagang\n");
printf("%d is the basic charges",fee);
return fee;
}
int age_d(int age)
{
if(age>50)
{
int bill;
bill=150-(0.30 *150);
return bill;
}
else
{
return 0;
}
}
int std(int c)
{
if(c=='y')
{
int bill;
bill=150-(0.40*150);
return bill;
}
else
{
return 0;
}
}
int month(int m)
{
if(m>=12)
{
int bill;
bill=150-(0.15*150);
return bill;
}
else
{
return 0;
}
}
int ses(int s)
{
if(s>5)
{
int bill;
bill=150-(0.20*150);
return bill;
}
else
{
return 0;
}

}


int main(void)
{
int age,s,m;
char c;
printf("enter age\n");
scanf("%d",&age);
printf("student status y or n \n");
scanf(" %c",&c);
printf("enter months\n");
scanf("%d",&m);
printf("enter noof sessions\n");
scanf("%d",&s);
int total;
int a,b,k,d;
a=age_d(age);
b=std(c);
k=month(m);
d=ses(s);
total=a+b+k+d;
printf("%d is total payment\n",total);
return 0;
}


