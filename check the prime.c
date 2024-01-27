//proram to check the prime no or not...
#include<stdio.h>
//function to cheak number is prime or not.
int cal_prime(int num,int i,int count)
{
//using for loop.
    for(i=1;i<=num;i++)
  {
    if(num%i==0)
  {
    count++;
  }
  }
//using if structure.
    if(count==2)
    //output statement.
    printf("\n%d IS PRIME NO \n",num);
    else
    //output statement.
    printf("\n%d IS NOT PRIME NO\n",num);
    return 0;//return value
}
//main function.
int main(void)
{
    int num,i;
    int count=0;
    //output statement.
    printf("ENTER ANY NO :");
    scanf("%d",&num);
    //calling function.
    cal_prime(num,i,count);

    return 0;//return value.
}
