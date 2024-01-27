//Program to display factorial of a number.
#include<stdio.h>
//funcition to calculate factorial.
int cal_factorial(int f,int c,int num)
{
//using for loop.
 for(c=1;c<=num;c++)
  {
    f=f*c;
  }
  return f;//return value.
}
//main function
int main(void)
{
    int num,c;
    int f=1;
    //output statement.
    printf("ENTER ANY NO :");
    //input statement.
    scanf("%d",&num);
    //displaying factorial.
    printf("FACTORIAL OF %d is = %d\n",num,cal_factorial(f,c,num));

    return 0;//return value.
}
