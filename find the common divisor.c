//This program is used for the 
#include<stdio.h>//header files


int fun(int a,int b, int c)
{
if(a!=0)
{

if(b%a==0 && c%a==0)
printf("%d is common divisor of %d and %d\n",a,b,c);
else
printf("%d is not common divisor of %d and %d\n",a,b,c);
}
else
{
printf("a=0 so invalid input\n");
}
}

int main(void) //main function
{
    int a,b,c;
    printf("ENTER INTEGER A :");//output statement
    scanf("%d",&a);//input statement
    printf("ENTER INTEGER B :");//output statement
    scanf("%d",&b);//input statement
    printf("ENTER INTEGER c :");//output statement
    scanf("%d",&c);//input statement
    
    fun(a,b,c);
    
    return 0;//return value
    
    }
