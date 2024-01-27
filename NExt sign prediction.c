//This program is used for the display next traffic signal.

#include<stdio.h>//header files

//function to calculate next signal.
int fun(char sign)
{
    char b;
//conditions
    if((sign>='a' && sign<'z') || (sign>='A' && sign<'Z'))
    {
    b=++sign;//using increment operator.
    printf("THE NEXT SIGN WIL BE %c\n",b);
    }
    if(sign=='z')
    {
    b='a';
    printf("THE NEXT SIGN WIL BE %c\n",b);
    }
    if(sign=='Z')
    {
    b='A';
    printf("THE NEXT SIGN WIL BE %c\n",b);
    }
//return value.
    return 0;
}

int main(void) //main function
{
    char sign;//character data type.
    printf("ENTER THE LAST SIGN:");//output statement
    scanf(" %c",&sign);//input statement
    
    //calling function to display output.
    fun(sign);
    
    return 0;//return value
    
    }
