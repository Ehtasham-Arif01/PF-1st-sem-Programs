#include <stdio.h>
#include <math.h>
int countdigits(int n) {
    if (n==0) 
    {
        return 1;
    }
    int count=0;
    while (n!=0) 
    {
        n=n/10;
        ++count;
    }
    return count;
}
int custompow(int base, int exponent) {
    int result=1;
    for (int i=0;i<exponent;++i) 
    {
        result=result*base;
    }
    return result;
}
int multiply(int num) 
{
    int digits=countdigits(num);
    int result=num*custompow(5, digits);
    return result;
}

int main() {
    int userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    printf("multiply(%d) = %d\n",userInput,multiply(userInput));
    return 0;
}

