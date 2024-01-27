#include<stdio.h>

int burger()
{
int a;
int bill;
int burger=300;
int fri_cold=150;
printf("WOULD YOU LIKE TO ADD FRIES AND COLD DRINK\n");
printf("1) YES \n2) NO ");
scanf("%d",&a);
if(a==1)
{
bill=burger+fri_cold;
printf("YOUR BILL IS %d\n",bill);
}
else if(a==2)
{
bill=burger;
printf("YOUR BILL IS %d\n",bill);
}
else
{
printf("INVALID INPUT\n");
}
}
int biryani()
{
int b,c,bill;
int half=120;
int full=240;
int piece=70;
printf("CHOOSE\n1)HALF BIRYANI : \n2)FULL BIRYANI :\n");
scanf("%d",&b);
printf("YOU WANT TO ADD CHICKEN PIECE \n1)YES\n2)NO\n");
scanf("%d",&c);
if (b==1 && c==1)
{
bill=half+piece;
printf("YOUR BILL IS %d\n",bill);
}
else if(b==1 &&c==2)
{
bill=half;
printf("YOUR BILL IS %d\n",bill);
}
else if (b==2 && c==1)
{
bill=full+piece;
printf("YOUR BILL IS %d\n",bill);
}
else if(b==2 &&c==2)
{
bill=full;
printf("YOUR BILL IS %d\n",bill);
}
else
{
printf("INVALID INPUT");
}

return 0;
}

int main(void)
{

printf("WELCOME TO THE FAST'S CAFE\n\nWHAT WOULD YOU LIKE TO EAT:\n");
int option;
printf("PRESS 1 FOR BURGER :\nPRESS 2 FOR BIRYANI :\n");
scanf("%d",&option);
if(option==1)
{
burger();
printf("\nENJOY YOUR MEAL\n");
printf("THANK YOU FOR SHOPPING HERE!\n");
}
else if(option==2)
{
biryani();
printf("\nENJOY YOUR MEAL\n");
printf("THANK YOU FOR SHOPPING HERE!\n");
}
else
{
printf("INVALID INPUT\n");
}



return 0;
}
