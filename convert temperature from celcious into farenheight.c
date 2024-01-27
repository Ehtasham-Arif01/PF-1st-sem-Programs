/*This program is used for the to convert temperature from celcious into farenheight.*/ 

#include<stdio.h>//header files
//function to calculate tempearture in farenheight.

int temp_faren(float temp_celcious)
{
    float temp_faren;
    
    //using formula.
    temp_faren=(temp_celcious*9.0/5.0)+32;
    
    return temp_faren;//return value;
}

//main function.
int main(void)
{
    float temp_celcious;
    printf("ENTER TEMPERATURE IN CELCIOUS :");//output statement
    scanf("%f",&temp_celcious );//input statement
    //calling fuction.
    printf("TEMPERATUE IN FARENHEIGHT IS %f\n",temp_faren(temp_celcious));
    
    return 0;//return value
    
    }
