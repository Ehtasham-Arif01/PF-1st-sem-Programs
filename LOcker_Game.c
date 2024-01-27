#include<stdio.h>
void locker_game()
{
int num_lockers=20;
int lockers[20]={0};
for(int stu=1;stu<=num_lockers;++stu) 
{
for(int locker=stu-1;locker<num_lockers;locker+=stu)
{
lockers[locker]=1-lockers[locker];
}
}
printf("Locker states after the game:\n");
for(int i=0;i<num_lockers;++i)
{
printf("Locker %d: %s\n",i+1,lockers[i]?"Open":"Closed");
}
}
int main()
{
char user_input;
printf("Enter 'Y' to initiate the locker game: ");
scanf(" %c", &user_input);
if(user_input=='Y'||user_input=='y')
{
locker_game();
}
else
{
printf("Invalid input. Please enter 'Y' to initiate the game.\n");
}
return 0;
}
