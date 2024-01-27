ASSINGNMENT NO : 01
NAME : EHTASHAM ARIF
ROLL NO : 23P-0567
SECTION : BCS-1A
CODE :
/*THIS PROGRAM IS USED TO CALCULATE AND DISPLAY
THE TOTAL BILL FOR CELLULAR TELEPHONE COMPANY*/
#include<stdio.h>
//function to calculate total bill.
float cal_bill(char service_code,float minutes,float day_min,float night_min)
{
//using if else if structure.
if(service_code=='r' || service_code=='R')
{
float total1;
//using if else if structure.
if(minutes>=50)
//using formula.
total1=10+0.20*(minutes-50);
else if(minutes<0)
{
printf("\n\nINVALID MINUTES INPUT\n");
total1=0;
}
else
total1=10;
//invalid inputs.
return total1;//return value
}
else if(service_code=='p' || service_code=='P')
{
float day_total,night_total,total2,premium;
premium=25;
//using nested if.
if(day_min>0)
{
//using if else.
if(day_min>=75)
//using formula.
day_total=0.10*(day_min-75);
else
day_total=25;
}
if(night_min>0)
{//using if else.
if(night_min>=100)
//using formula.
night_total=0.05*(night_min-100);else
night_total=25;}
//using formula.
total2=(premium + day_total + night_total);
//if input==0
if((day_min>=0 && day_min<75)&&(night_min>=0 && night_min<100))
total2=premium;
//invalid inputs.
if(day_min<0 || night_min<0)
{
printf("\n\n\t\tINVALID MINUTES INPUT\n");
total2=0;
}
return total2;//return value
}
else//incase of invalid inputs.
{
printf("\nERROR! \nINVALID CHARACTER INPUT\n\n");
}
}
//main function where execution will start.
int main(void)
{
int account_no;
//declaring variables.
float minutes,day_min,night_min;
char service_code;
//input values from the user.
printf("PLEASE ENTER THE ACCOUNT NO :");
scanf("%d",&account_no);
printf("\nPLEASE ENTER THE TYPE OF SERVICE USED\n\n");
printf("PRESS r or R for Regular Service :\n");
printf("PRESS p or P for premium service :\n " );
scanf(" %c",&service_code);
//using if structure.
if(service_code=='r' || service_code=='R')
{
//input no of minutes for regular service.
printf("\n----REGULAR SERVICE----\n\n");
printf("\nENTER THE NO OF MINUTES SERVICE USED :");
scanf("%f",&minutes);
}
if(service_code=='p' || service_code=='P')
{
//input no of minutes for premium service.
printf("\n----PREMIUM SERVICE----\n\n");
printf("ENTER THE MINUTES USED DURING DAY(6AM-6PM):");
scanf("%f",&day_min);
printf("ENTER THE MINUTES USED DURING NIGHT(6PM-6AM):");
scanf("%f",&night_min);
}//calling function to display the calculated output.
float bill=cal_bill(service_code,minutes,day_min,night_min);
if(service_code=='r' || service_code=='R' || service_code=='p' || service_code=='P'){
//output values.
printf("\n\nTHE ACCOUNT NO IS : %d\n",account_no);
printf("THE TYPE OF SERVICE IS : %c\n",service_code);
if(service_code=='r' || service_code=='R')
{
printf("NO OF MINUTES USED ARE : %f\n",minutes);
}
if(service_code=='p' || service_code=='P')
{
printf("THE NO OF MINUTES USED DURING DAY (6 AM TO 6 PM) : %.2f\
n",day_min);
printf("THE NO OF MINUTES USED DURING NIGHT (6 AM TO 6 PM) : %.2f\
n",night_min);
}
//output total due for the user.
printf("\n\nTHE AMOUNT DUE FOR THE USER IS : %.2f $\n\n",bill);
}
return 0;
}
OUTPUT FOR REGULAR SERVICE :
OUTPUT FOR INVALID SERVICE INPUT :OUTPUT FOR INVALID REGULAR INPUT :
OUTPUT FOR UPTO FREE MIN DUE REGULAR SERVICE :OUTPUT FOR PREMIUM SERVICE :
OUTPUT FOR FREE MIN DUES ;OUTPUT FOR ZERO MIN USED :
OUTPUT FOR INVALID MINUTES INPUT :
