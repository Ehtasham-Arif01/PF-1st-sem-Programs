#include<stdio.h>
//main function.
int main(void)
{
    int age;
    printf("ENTER YOUR AGE :");
    scanf("%d",&age);
    //using switch statement.
    switch(age>=18)
    {
    case 1:
    printf("you are eligible to vote\n");
    break;
    case 0:
    printf("you are not eligible to vote\n");
    break;
    }
    
    return 0;//return value
    
    }
