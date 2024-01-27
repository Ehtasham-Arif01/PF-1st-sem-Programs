/*This program is used to cheak that the  placement
of two box is possible or not*/
#include<stdio.h>
//function to cheak placement possible or not.
int cheak_box(char box1,char box2)
{
//conditions to cheak placement.
if(box1=='r' && box2=='r')
{
printf("\nNOT VALID PLACEMENT\n\n");//ouput statement.
return (-1);//return value.
}
if(box1=='g' && box2=='g')
{
printf("\nNOT VALID PLACEMENT\n\n");//ouput statement.
return (-1);//return value.
}
if(box1=='b' && box2=='b')
{
printf("\nNOT VALID PLACEMENT\n\n");//ouput statement.
return (-1);//return value.
}
else
{
printf("\nVALID PLACEMENT\n\n");//ouput statement.
return 1;//return value.
}
}
//main function.
int main(void)
{
char box1,box2;
//inputs values by the user.
printf("\nPlease Enter 'r' for RED 'b' for BLUE 'g' for green\n\n\n");
printf("CHOOSE THE BOX - 1 :");
scanf(" %c",&box1);
printf("CHOOSE THE BOX - 2 :");
scanf(" %c",&box2);
//calling function to perform task.
cheak_box(box1,box2);
return 0;
}


