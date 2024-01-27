#include<stdio.h>
int fun1(int amount)
{
int k;
 if(amount>=5000)
 {
printf("Congrats! you got 10  off \n");
k=(amount*0.20);
return (amount-k);
}
else
{
return amount;
}
}
int fun2(int item)
{
if(item>=10)
{
printf("Congratulation! you got free shippng \n");
return 0;
}
else
{
printf("Shipping Charges  : 100 Rs \n");
return 100;
}
}
int main(void)
{

int amount,item;
int a,c,m;

printf("ENTER THE TOTAL AMOUNT YOU SPENT ON SHOPPING (in Rs) : ");
scanf("%d",&amount);
printf("ENTER THE TOTAL NO OF ITEMS  : ");
scanf("%d",&item);
a=fun1(amount);
c=fun2(item);
m=a+c;
printf("Total amount to be paid is : %d\n ",m);


return 0;
}
