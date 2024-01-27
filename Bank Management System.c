#include<stdio.h>

int current_account=10000;
int saving_account=5000;

int withdrawal()
{
int option;
printf("--------withdrawal--------\n\n");
printf("Select the Account type:\n1)Current Account.\n2)Saving Account.\n");
scanf("%d",&option);
if(option==1)
{
int amount,total;
printf("ENTER THE AMOUNT YOU WANT TO WITHDWRAW :\n");
scanf("%d",&amount);
total=current_account-amount;
printf("CASH WITHDRAW SUCCESSFULLY!\n\n");
printf("AMOUNT IN CURRENT ACCOUNT IS %d Rs\n",total);
}
else if(option==2)
{
int amount,total;
printf("ENTER THE AMOUNT YOU WANT TO WITHDWRAW :\n");
scanf("%d",&amount);
total=saving_account-amount;
printf("CASH WITHDRAW SUCCESSFULLY!\n\n");
printf("AMOUNT IN SAVING ACCOUNT IS %d Rs\n",total);
}
else 
{
printf("INVALID INPUT\n");
}
}
int deposit()
{
int option;
printf("--------Deposit--------\n\n");
printf("Select the Account type:\n1)Current Account.\n2)Saving Account.\n");
scanf("%d",&option);
if(option==1)
{
int amount,total;
printf("ENTER THE AMOUNT YOU WANT TO DEPOSIT :\n");
scanf("%d",&amount);
total=current_account+amount;
printf("CASH DEPOSITED SUCCESSFULLY!\n\n");
printf("AMOUNT IN CURRENT ACCOUNT IS %d Rs\n",total);
}
else if(option==2)
{
int amount,total;
printf("ENTER THE AMOUNT YOU WANT TO DEPOSIT :\n");
scanf("%d",&amount);
total=saving_account+amount;
printf("CASH DEPOSITED SUCCESSFULLY!\n\n");
printf("AMOUNT IN SAVING ACCOUNT IS %d Rs\n",total);
}
else
{
printf("INVALID INPUT\n");
}
}
int balance()
{
int option,balance;
printf("--------withdrawal--------\n\n");
printf("Select the Account type:\n1)Current Account.\n2)Current Account.\n");
scanf("%d",&option);
if(option==1)
{
balance=current_account;
printf("YOUR CURRENT BALANCE IS %d Rs\n",balance);
}
else if(option==2)
{
balance=saving_account;
printf("YOUR CURRENT BALANCE IS %d Rs\n",balance);
}
else
{
printf("INVALID INPUT.\n");
}

}
int exit_program()
{
return 0;
}

int main(void)
{
int choice;
printf("\n--------ATM MENU--------\n\n");
printf("1. Withdrawal\n2. Deposit\n3. Balance Inquiry\n4. Exit\n\n");
scanf("%d",&choice);
if(choice==1)
{
withdrawal();
}
else if(choice==2)
{
deposit();
}
else if(choice==3)
{
balance();
}
else if(choice==4)
{
exit_program();
}
else
{
printf("INVALID INPUT.  Please input a valid (1/2/3/4).\n");
}


return 0;
}
