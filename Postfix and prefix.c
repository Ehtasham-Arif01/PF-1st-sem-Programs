#include<stdio.h>
int count=10;
int fun1()
{
return count++;
}
int fun2()
{
 
 return +count;
}
int main()
{
count=10;
printf("VALUE OF COUNT IS = %d\n", count);
printf("THE VALUE AFTER POSTFIX IS = %d\n ",fun1() );
printf("THE VALUE AFTER PREFIX IS  = %d\n ",fun2() );
return 0;
}

