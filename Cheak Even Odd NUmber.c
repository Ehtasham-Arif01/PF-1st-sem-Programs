#include<stdio.h>
#include<math.h>
int fun(int num)
{
if(num%2==0)
{
printf(" Number is even\n");
}
else
{
printf("Number is odd\n");
}
return 0;
}

int main (void)
{
int num;
printf("Enter a number = ");
scanf("%d",&num);
fun(num);

return 0;
}
