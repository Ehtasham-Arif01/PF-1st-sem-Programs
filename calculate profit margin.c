/*this program is used to calculate profit margin and 
return over investment and other financial aspects*/
#include<stdio.h>

//function to calcilate net profit
double net_profit(double rav,double exp)
{
    float e;
    e=rav-exp;
    return e;
}

//function to calculate profit margin
double pro_margin(double rav,double exp)
{
    double r,t;
    t=net_profit(rav,exp);//calling net_profit function here.
    r=t/rav;
    return r;
}

//function to calculate return turn over investment.
double rio(double rav,double exp)
{
    double z,x;
    x=net_profit(rav,exp);//calling net_profit function here.
    z=x/exp;
    return z;
}

// main function.
double main(void)
{
    double rav,exp,m,n,b;
//inputs values from the user.
    printf("ENTER REVENUE IN $ :");
    scanf("%lf",&rav);
    printf("ENTER EXPENSE IN $ :");
    scanf("%lf",&exp);
//calling functions to perform tasks.
    m=net_profit(rav,exp);
    n=pro_margin(rav,exp);
    b=rio(rav,exp);
//conditions incase of invalid inputs.
    if(rav>0)
    printf("NET PROFIT IS  : %lf $ \n",m);
    if (rav>0)
{
    if(exp>0)//using nested if.
    {
    printf("PROFIT MARGIN IS  : %lf PERSENT \n",n*100);
    printf("TOTAL RETURN OVER INVESMENT IS : %lf  persent \n",b*100);
    }
}

//conditions incase of invalid inputs.
    if(rav<=0.0)
{
    printf("ERROR!\nREVENUE IS INVALID ( it must be > 0 )\n");
    return (-1.0);//return value
}
    if(exp<=0.0)
{
    printf("ERROR!\nEXPENSE IS INVALID ( it must be > 0 )\n");
    return (-1.0);//return value
}
    if((n*100)<0)
{
    if((b*100)<0)//using nested if.
{
    return 1;//return value
}
    return 0;
}
}
