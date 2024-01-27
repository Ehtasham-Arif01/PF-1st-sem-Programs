#include<stdio.h>
int update_stock(int no,int qua)
{
if(no==1)
{
int k;
k=10-qua;
    printf("\nAvailable Drinks:\n\n");
    printf("1. Coke   (price: $5, Available: %d)\n\n",k);
    printf("2. Pepsi  (price: $7, Available: 15)\n\n");
    printf("3. Sprite (price: $7, Available: 15)\n\n");
    printf("4. 7UP    (price: $3, Available: 25)\n\n");
    }
else if(no==2)
{
int k;
k=15-qua;
printf("\nAvailable Drinks:\n\n");
    printf("1. Coke   (price: $5, Available: 10)\n\n");
    printf("2. Pepsi  (price: $7, Available: %d)\n\n",k);
    printf("3. Sprite (price: $7, Available: 15)\n\n");
    printf("4. 7UP    (price: $3, Available: 25)\n\n");
    }  
else if(no==3)
{
int k;
k=15-qua;
printf("\nAvailable Drinks:\n\n");
    printf("1. Coke   (price: $5, Available: 10)\n\n");
    printf("2. Pepsi  (price: $7, Available: 15)\n\n");
    printf("3. Sprite (price: $7, Available: %d)\n\n",k);
    printf("4. 7UP    (price: $3, Available: 25)\n\n");
    }  
else if(no==4)
{
int k;
k=25-qua;
printf("\nAvailable Drinks:\n\n");
    printf("1. Coke   (price: $5, Available: 10)\n\n");
    printf("2. Pepsi  (price: $7, Available: 15)\n\n");
    printf("3. Sprite (price: $7, Available: 15)\n\n");
    printf("4. 7UP    (price: $3, Available: %d)\n\n",k);
    }
else
{
printf("invalid input\n");
}

}
    
int cheak_avail(int no,int qua)
{
if(no==1)
{
if(qua<=10)
{
int a=cal_bill(no,qua);
printf("YOU SELECTED COKE - TOTAL BILL IS : %d\n",a);
update_stock(no,qua);
}
else
{
int b,m;
b=10;
m=cal_bill(no,b);
printf("YOU SELECTED COKE - TOTAL BILL IS :%d\n",m);
printf("maximum order has been reached\n");
update_stock(no,qua);
}
}
else if(no==2)
{
if(qua<=15)
{
int a=cal_bill(no,qua);
printf("YOU SELECTED PEPSI - TOTAL BILL IS :%d\n",a);
update_stock(no,qua);
}
else
{
int b,m;
b=15;
m=cal_bill(no,b);
printf("YOU SELECTED PEPSI - TOTAL BILL IS :%d\n",m);
printf("maximum order has been reached\n");
update_stock(no,qua);
}
}

else if(no==3)
{
if(qua<=15)
{
int a=cal_bill(no,qua);
printf("YOU SELECTED SPRITE - TOTAL BILL IS :%d\n",a);
update_stock(no,qua);
}
else
{
int b,m;
b=15;
m=cal_bill(no,b);
printf("YOU SELECTED SPRITE - TOTAL BILL IS :%d\n",m);
printf("maximum order has been reached\n");
update_stock(no,qua);
}
}

else if(no==4)
{
if(qua<=25)
{
int a=cal_bill(no,qua);
printf("YOU SELECTED 7UP - TOTAL BILL IS :%d\n",a);
update_stock(no,qua);
}
else
{
int b,m;
b=25;
m=cal_bill(no,b);
printf("YOU SELECTED 7UP - TOTAL BILL IS :%d\n",m);
printf("maximum order has been reached\n");
update_stock(no,qua);
}
}
else
{
printf("invalid input\n");
}

}


int user_input(int no,int qua)
{
    
    printf("Enter the drink number you want to purchase (1-4) :");
    scanf("%d",&no);
    printf("Enter the quanty you want to buy :");
    scanf("%d",&qua);
    if(no==1)
    {
    cheak_avail(no,qua);
    }
    else if (no==2)
    {
    cheak_avail(no,qua);
    }
    else if (no==3)
    {
    cheak_avail(no,qua);
    }
    else if (no==4)
    {
    cheak_avail(no,qua);
    }
    else 
    {
    printf("INVALID INPUT\n");
    }
    return 0;
    }
int cal_bill(int no,int qua)
{
int total;
if(no==1)
{
total=(qua*5);
return total;
}
else if(no==2)
{
total=(qua*7);
return total;
}
else if(no==3)
{
total=(qua*7);
return total;
}
else if(no==4)
{
total=(qua*3);
return total;
}
else
{
return 0;
}
}
int main(void)
{
    int a,no,qua,cost,stock;
    printf("WELCOME TO THE VENDING MACHINE\n\n");
    printf("AVAILABLE DRINKS:\n");
    printf("1. Coke   (price: $5, Available: 10)\n\n");
    printf("2. Pepsi  (price: $7, Available: 15)\n\n");
    printf("3. Sprite (price: $7, Available: 15)\n\n");
    printf("4. 7UP    (price: $3, Available: 25)\n\n");
    user_input(no,qua);
    
    
    return 0;
    }
