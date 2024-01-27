#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int main(void)
{
int b;
int sum1=0;
int sum2=0;
printf("\n*_*_*_*_*_*_*_*_*_WELCOME  TO  DISE  GAME!*_*_*_*_*_*_*_*_*_\n\n");
char arr1[10];
char arr2[10];
int dise_1[3];
int dise_2[3];


printf("*_*_*_*_*_*_ PLAYER - 1 : PLEASE ENTER YOUR NAME :");
fgets(arr1,sizeof(arr1),stdin);
printf("*_*_*_*_*_*_ PLAYER - 2 : PLEASE ENTER YOUR NAME :");
fgets(arr2,sizeof(arr2),stdin);
//for player 1
for(int i=0;i<=2;i++)
{
srand(time(NULL));
b=rand()%6+1;
sleep(1);
dise_1[i]=b;
sum1+=b;
}
printf("\n\t\tROLLING DISE FOR PLAYER - 1 : %s\n",arr1);
printf("\t\tDISE - 1 : %d\n",dise_1[0]);
printf("\t\tDISE - 2 : %d\n",dise_1[1]);
printf("\t\tDISE - 3 : %d\n",dise_1[2]);
if(dise_1[0]==6 && dise_1[1]==6 && dise_1[2]==6)
{
sum1=0;
}

//player 2
for(int i=0;i<=2;i++)
{
srand(time(NULL));
b=rand()%6+1;
sleep(1);
dise_2[i]=b;
sum2+=b;
}
printf("\n\t\tROLLING DISE FOR PLAYER - 2 : %s\n",arr2);

printf("\t\tDISE - 1 : %d\n",dise_2[0]);
printf("\t\tDISE - 2 : %d\n",dise_2[1]);
printf("\t\tDISE - 3 : %d\n",dise_2[2]);

if(dise_2[0]==6 && dise_2[1]==6 && dise_2[2]==6)
{
sum2=0;
}

printf("\nCalculating the total scores...\n\n");
printf("Total Score for %s : %d \n",arr1,sum1);
printf("Total Score for %s : %d \n\n",arr2,sum2);

if(sum1==sum2)
{
if(dise_1[0]>dise_2[0])
{
printf("\t\tAnd the winner is...%s\t\tCongratulations!",arr1);
}
else if(dise_2[0]>dise_1[0])
{
printf("\t\tAnd the winner is...%s\t\tCongratulations!",arr2);
}
else if(dise_1[1]>dise_2[1])
{
printf("\t\tAnd the winner is...%s\t\tCongratulations!",arr1);
}
else if(dise_2[1]>dise_1[1])
{
printf("\t\tAnd the winner is...%s\t\tCongratulations!",arr2);
}
else if(dise_1[2]>dise_2[2])
{
printf("\t\tAnd the winner is...%s\t\tCongratulations!",arr1);
}
else if(dise_2[2]>dise_1[2])
{
printf("\t\tAnd the winner is...%s\t\tCongratulations!",arr2);
}
else
{
printf("BOTH PLAYERS HAVE SAME SCORES IN ALL ROUNDS\n\t\t\t GAME TIE \t\t\t");
}
}


if(sum1>sum2)
{
printf("\t\t\a\aAnd the winner is...%s\t\tCongratulations!",arr1);
}
if(sum2>sum1)
{
printf("\t\t\a\aAnd the winner is...%s\t\tCongratulations!\n",arr2);
}

printf("\n\n*_*_*_*_*_*_*_*_*_*_*_*_THE  END_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n");
return 0;
}
