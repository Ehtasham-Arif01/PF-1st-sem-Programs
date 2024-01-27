#include<stdio.h>
int main(void)
{

int vote;
int sum1=0;
int sum2=0;
int sum3=0;
int sum4=0;
int counter=1;
    printf("COOSE YOUR FAVOURITE FROM THE FOLLOEING LIST\n");
    printf("1)coffee 2) tea  3)coke  4) juice\n");
    
    while(vote!=-1)
    {
    printf("pleae input favourite bevrage for person #%d choose 1,2,3,4 from the menu or press -1 to exit the program : ",counter);
    counter++;
    scanf("%d",&vote);
    if(vote>4 || vote<1)
    {
printf("invalid selection\n");
}
    if(vote==1)
    {
       sum1+=1;
       }
    if(vote==2)
    {
       sum2+=1;
       }
    if(vote==3)
    {
       sum3+=1;
       }
   if(vote==4)
    {
       sum4+=1;
       }

}

printf("Beverage            no of votes\n");
printf("-------------------------------\n");
printf("coffee  =             %d\n",sum1);
printf("Tea  =                %d\n",sum2);
printf("coke =               %d\n",sum3);
printf("orange juice =       %d\n",sum4);

    return 0;
}
