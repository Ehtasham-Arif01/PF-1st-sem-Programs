//This program is used for the 
#include<stdio.h>//header files
int fun(int no_of_order)
{
    //conditions
    if(no_of_order>0)
    {
    if(no_of_order % 2==0)
    {
    printf("BAKE EVEN NO OF ITEMS\n");
    }
    else if(no_of_order % 2 !=0)
    {
    printf("BAKE ODD NO OF ITEMS\n");
    }
    }
    else
    {
    printf("DONT BAKE ANY ITEMS\n");
    }
    return 0;//return value
}

int main(void) //main function
{
    int no_of_order;
    printf("ENTER NO OF ORDERS:");//output statement
    scanf("%d",&no_of_order);//input statement
    //caling function
    fun(no_of_order);
  
    return 0;//return value
    
    }
