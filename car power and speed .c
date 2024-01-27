/* this program is used to calculate the new
car's overall performance using inputs*/
#include<stdio.h>
//Function to add speed and power.
int formula_one(int x,int y)
{
    return (x+y); //return value
}

//function to take squre of efficieny.
int formula_two(int z)
{

    return (z*z); //return value
}

// main function
int main()
{
//declare variables
    int power1,speed1,eff1,power2,speed2,eff2;
    int a,b,c,d,sum1,sum2,total;

//inputs of car 1 from user.
    printf("CAR 1 POWER :");
    scanf("%d",&power1);
    printf("CAR 1 SPEED :");
    scanf("%d",&speed1);
    printf("CAR 1 EFFICIENCY :");
    scanf("%d",&eff1);
/*callng functions and assinging 
their values to variables.*/
    a=formula_one(power1,speed1);//passing arguments
    b=formula_two(eff1);//passing arguments

//inputs of car 2 from user.
    printf("CAR 2 POWER :");
    scanf("%d",&power2);
    printf("CAR 2 SPEED :");
    scanf("%d",&speed2);
    printf("CAR 2 EFFICIENCY :");
    scanf("%d",&eff2);
/*callng functions and assinging 
their values to variables.*/
    c=formula_one(power2,speed2);//passing arguments
    d=formula_two(eff2); //passing arguments
//for calculation of overall performance.
    sum1=a+c;
    sum2=b+d;
    total=sum1 + sum2;
//overall result
    printf("\nNEW CAR'S OVERALL PERFORMANCE : %d\n",total);

    return 0;
}

