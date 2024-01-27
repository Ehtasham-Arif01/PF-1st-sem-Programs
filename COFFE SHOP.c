#include<stdio.h>
//function to calculate bill.
float cal_bill(int qua,float price)
{
float total;
total=qua*price;
return total;
}
//main function.
int main(void)
{
    int choice,qua;
    float price;
    printf("WELCOME TO THE COFFEE SHOP!\n\n");
    printf("Please select your coffee entering number :\n");
    printf("1) Espresso\n2)Latte\n3)Cappuccino\n4)Mocha\n5)Americano\n");
    //input from the user.
    printf("ENTER YOUR CHOICE :");
    scanf("%d",&choice);
    printf("ENTER THE QUENTITY :");
    scanf("%d",&qua);
    //fixed prices.
    float espresso=2.50;
    float latte=3.00;
    float cappuccino=3.50;
    float mocha=4.00;
    float americano=2.25;
    //using switch statement.
    switch(choice)
    {
      case 1:
      {
      float k;
      k=cal_bill(qua,espresso);//calling function
      printf("YOU SELECTED %d ESPRESSO.THAT WILL BE %.2f $ PLEASE \n",qua,k);
      break;
      }
       case 2:
       {
      float k;
      k=cal_bill(qua,latte);//calling function
      printf("YOU SELECTED %d LATTE.THAT WILL BE %.2f $ PLEASE \n",qua,k);
      break;
      }
       case 3:
       {
      float k;
      k=cal_bill(qua,cappuccino);//calling function
      printf("YOU SELECTED %d CAPPUCCINO.THAT WILL BE %.2f $ PLEASE \n",qua,k);
      break;
      }
       case 4:
       {
      float k;
      k=cal_bill(qua,mocha);//calling function
      printf("YOU SELECTED %d MOCHA.THAT WILL BE %.2f $ PLEASE \n",qua,k);
      break;
      }
       case 5:
       {
      float k;
      k=cal_bill(qua,americano);//calling function
      printf("YOU SELECTED %d AMERICANO.THAT WILL BE %.2f$ PLEASE. \n",qua,k);
      break;
      }
      default:
      {
      printf("\ninvalid input\n");
      }
      
      }
      return 0;//return value
      
      }
